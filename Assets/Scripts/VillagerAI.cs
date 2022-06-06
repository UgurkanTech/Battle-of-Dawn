using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.AI;
using Random = UnityEngine.Random;

public class VillagerAI : MonoBehaviour
{
    private NavMeshAgent agent;
         private Vector3 pos;
         void Start () {
            agent = GetComponent<NavMeshAgent>();

            pos = new Vector3(Random.Range(-20.0f, 20.0f), 0, Random.Range(-20.0f, 20.0f));
         }

         private void FixedUpdate()
         {
             if (agent.remainingDistance < 1f)
             {
                 pos += new Vector3(Random.Range(-20.0f, 20.0f), 0, Random.Range(-20.0f, 20.0f));

                 agent.destination = pos;
                 
             }
         }
}
