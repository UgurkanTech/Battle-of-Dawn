using System;
using System.Collections;
using System.Collections.Generic;
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
         public float distance;
         public float speed;

         public VillagerState state;

         public World world;
         

         public GameObject fullObject;

         public Building target;
         
         private float workSpeed;
         public bool isFull
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
            
            state = VillagerState.Roaming;
            workSpeed = Random.Range(0, 1);
         }

         private int timer = 0;
         private void FixedUpdate()
         {
             distance = agent.remainingDistance;
             speed = agent.velocity.magnitude;

             switch (state)
             {
                 case VillagerState.Roaming:
                     if (agent.remainingDistance < 1f)
                     {
                         pos += new Vector3(Random.Range(-20.0f, 20.0f), 0, Random.Range(-20.0f, 20.0f));
                         pos.x = Mathf.Clamp(pos.x, -62.5f, 62.5f);
                         pos.z = Mathf.Clamp(pos.z, -62.5f, 62.5f);
 
                         agent.destination = pos;
                     }

                     if (timer > 100 + workSpeed * 100)
                     {
                         float minDist = Mathf.Infinity;
                         Building closest = null;
                         for (int i = 0; i < world.trees.Count; i++)
                         {
                             float dist = Vector3.Distance(transform.position, world.trees[i].transform.position);
                             if (dist < minDist && world.trees[i].owner == null)
                             {
                                 if (closest != null)
                                     closest.owner = null;
                                 minDist = dist;
                                 closest = world.trees[i];
                                 world.trees[i].owner = this.gameObject;
                             }
                         }

                         agent.destination = closest.transform.position;
                         target = closest;
                         state = VillagerState.OnGather;
                         timer = 0;
                     }
                     break;
                 case VillagerState.OnGather:
                     
                     if (!agent.pathPending)
                     {
                         if (agent.remainingDistance <= agent.stoppingDistance)
                         {
                             if (!agent.hasPath || agent.velocity.sqrMagnitude == 0f)
                             {
                                 
                                 if (Vector3.Distance(transform.position, target.transform.position) > 2f)//Change this
                                 {
                                     state = VillagerState.Roaming;
                                 }
                                 else
                                 {
                                     agent.speed = 0;
                                     agent.destination = world.townHall.transform.position;
                                     transform.LookAt(target.transform);//change this
                                     target.canMove = false;
                                     state = VillagerState.Gathering;
                                     timer = 0;
                                 }
                                 
                                 
                                 
                             }
                         }
                     }
                     
                     break;
                 case VillagerState.Gathering:
                     if (timer > 100 + workSpeed * 100)
                     {
                         agent.speed = 2;
                         
                         state = VillagerState.OnDeposit;
                         isFull = true;
                         target.owner = null;
                         
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
                     
                     if (!agent.pathPending)
                     {
                         if (agent.remainingDistance <= agent.stoppingDistance)
                         {
                             if (!agent.hasPath || agent.velocity.sqrMagnitude == 0f)
                             {
                                 if (Vector3.Distance(transform.position, world.townHall.transform.position) > 4.5f)//Change this
                                 {
                                     agent.destination = world.townHall.transform.position;
                                 }
                                 else
                                 {
                                     agent.speed = 0;
                                     world.townHall.GetComponent<Building>().canMove = false;
                                     state = VillagerState.Depositing;
                                     
                                 }
                                 timer = 0;
                                     
                             }
                         }
                     }

                     break;
                 case VillagerState.Depositing:
                     if (timer > workSpeed * 20)
                     {
                         agent.speed = 2;
                         state = VillagerState.Roaming;
                         world.townHall.GetComponent<Building>().canMove = true;
                         isFull = false;
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
