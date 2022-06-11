using System;
using System.Collections;
using System.Collections.Generic;
using CameraActions;
using UnityEngine;
using UnityEngine.AI;
using Random = UnityEngine.Random;

public enum VillagerState
{
    Roaming,
    OnGather,
    Gathering,
    OnDeposit,
    Depositing
    
}

public class VillagerAI : MonoBehaviour
{
         private NavMeshAgent agent;
         public Vector3 pos;
         [SerializeField] private float distance;
         [SerializeField] private float speed;
         [SerializeField] private Vector3 destination;

         public VillagerState state;

         public World world;
         
         public GameObject fullObject;

         public Building target;

         private TapOnGameObject tog;
         
         private float workSpeed;
         public bool IsFull
         {
             get
             {
                 return full;
             }
             set
             {
                 full = value;
                 fullObject.SetActive(value);
             }
         }

         private bool full;

         //Delet this:
         private UIController uic;
         
         void Start () {
            agent = GetComponent<NavMeshAgent>();
            world = GameObject.Find("World").GetComponent<World>();
            uic = GameObject.Find("Global Scripts").GetComponent<UIController>();
            tog = GameObject.Find("Global Scripts").GetComponent<TapOnGameObject>();
            state = VillagerState.Roaming;
            workSpeed = Random.Range(0, 1);
         }

         private int timer = 0;
         
         private bool IsAgentReachedDestination()
         {
             if (agent.pathPending) return false;
             if (!(agent.remainingDistance <= agent.stoppingDistance)) return false;
             return !agent.hasPath || agent.velocity.sqrMagnitude == 0f;
         }
         
         
         private void FixedUpdate()
         {

#if UNITY_EDITOR
             distance = agent.remainingDistance;
             speed = agent.velocity.magnitude;
             destination = agent.destination;
#endif
             
             switch (state)
             {
                 case VillagerState.Roaming:
                     if (agent.remainingDistance < 1f)
                     {
                         agent.speed = 3;
                         pos = transform.position;
                         pos += new Vector3(Random.Range(-20.0f, 20.0f), 0, Random.Range(-20.0f, 20.0f));
                         pos.x = Mathf.Clamp(pos.x, -62.5f, 62.5f);
                         pos.z = Mathf.Clamp(pos.z, -62.5f, 62.5f);
 
                         agent.destination = pos;
                     }

                     if (timer > workSpeed * 100)
                     {
                         pos = transform.position;
                         float minDist = Mathf.Infinity;
                         Building closest = null;
                         float dist;
                         int count = world.trees.Count;
                         Building tree = null;
                         int closestID = -1;
                         for (int i = 0; i < count; i++)
                         {
                             tree = world.trees[i];
                             if (tree.hasOwner) continue;
                             dist = (pos - tree.transform.position).sqrMagnitude; //distance
                             if (dist < minDist)
                             {
                                 minDist = dist;
                                 closestID = i;
                             }
                         }

                         if (closestID != -1)
                         {
                             closest = world.trees[closestID];
                             closest.hasOwner = true;
                             agent.destination = closest.transform.position;
                             target = closest;
                             state = VillagerState.OnGather;
                         }
                         else
                         {
                             state = VillagerState.Roaming;
                         }
                         
                         timer = 0;
                     }
                     break;
                 case VillagerState.OnGather:
                     
                     
                     if (IsAgentReachedDestination())
                     {
                         if (Vector3.Distance(transform.position, target.transform.position) > 2.5f)//Change this
                         {
                             state = VillagerState.Roaming;
                             target.hasOwner = false;
                         }
                         else
                         {
                             agent.speed = 0;

                             if (world.townHall.GetComponent<Building>().doorOffsets != null)
                             {
                                 int door = Random.Range(0, world.townHall.GetComponent<Building>().doorOffsets.Length);
                                         
                                 agent.destination = world.townHall.transform.position + world.townHall.GetComponent<Building>().doorOffsets[door];
                             }
                             else
                             {
                                 agent.destination = world.townHall.transform.position;
                             }
                                     
                             transform.LookAt(target.transform);//change this
                             target.canMove = false;
                             state = VillagerState.Gathering;
                             timer = 0;
                         }
                     }


                     break;
                 case VillagerState.Gathering:
                     if (timer > workSpeed * 100)
                     {
                         agent.speed = 3;
                         
                         state = VillagerState.OnDeposit;
                         IsFull = true;
                         target.hasOwner = false;
                         
                         //Delet this:
                         target.canMove = true;
                         target.gameObject.SetActive(false);

                         Vector2Int p = world.worldToGridPosition(target.transform.position);
                         world.world[p.x, p.y] = null;
                         
                         world.trees.Remove(target);
                         target = null;
                         
                         timer = 0;
                     }
                     break;
                 case VillagerState.OnDeposit:
                     
                     if (IsAgentReachedDestination())
                     {
                         if (Vector3.Distance(transform.position, world.townHall.transform.position) > 4.5f)//Change this
                         {
                             agent.destination = world.townHall.transform.position;
                         }
                         else
                         {
                             agent.speed = 0;
                             state = VillagerState.Depositing;
                                     
                         }
                         timer = 0;


                     }
  
                     break;
                 case VillagerState.Depositing:
                     if (timer > workSpeed * 20)
                     {
                         agent.speed = 3;
                         state = VillagerState.Roaming;
                         world.townHall.GetComponent<Building>().canMove = true;
                         IsFull = false;
                         uic.logCount += 1; //delet
                         uic.updateUI(); //delet
                         timer = 0;
                     }
                     break;
                 default:
                     throw new ArgumentOutOfRangeException();
             }
             
             //agent.velocity.magnitude < 0.5f
             
             timer++;
         }
}
