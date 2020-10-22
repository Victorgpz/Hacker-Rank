#include<stdio.h>
int main() 
{ 
 
  int count,j,n,time,remain,flag=0,time_quantum;   		//intilization of elements          
  int wait_time=0,turnaround_time=0,at[10],bt[10],rt[10];
 
  printf("Enter Total Process:\t "); 			//info about no of process
  scanf("%d",&n); 
  remain=n; 
 
  for(count=0;count<n;count++) 				//for loop for geting info about Arrival time and Burst time about the individual process
  { 
    printf("Enter Arrival Time and Burst Time for Process Process Number %d :",count+1); 
    scanf("%d",&at[count]); 
    scanf("%d",&bt[count]); 
    rt[count]=bt[count]; 				//copying the burst time into remaining time
  } 
	
  printf("Enter Time Quantum:\t"); 
  scanf("%d",&time_quantum); 				//details about the time period allocated for each execution(time quantum)
  printf("\n\nProcess\t|Turnaround Time|Waiting Time\n\n"); 
	
  for(time=0,count=0;remain!=0;)			//for loop that executes until remaining process is 0 
  { 
	  
    if(rt[count]<=time_quantum && rt[count]>0) 		//checks if the curent process time is less than the time quantum and the remaining time is greater than 0 
    { 
      time+=rt[count]; 					//remaing time is the copy of burst time and if its lower than the time quantum then the cpu can execute it
      rt[count]=0; 					//so change the remaing time for the current process to 0 
      flag=1; 
    } 
    else if(rt[count]>0) 				//if the current process time is greater than the time quantum
    { 
      rt[count]-=time_quantum; 				//subctract the time quantum from the current process time
      time+=time_quantum; 				//and the time taken for the execution or the elapsed time in the time varable
    } 
	  
    if(rt[count]==0 && flag==1)  			//checks if the current process is executed complectly
    { 
      remain--; 					//if so then proceed to the next process 
      printf("P[%d]\t|\t%d\t|\t%d\n",count+1,time-at[count],time-at[count]-bt[count]);  //printing statement
      wait_time+=time-at[count]-bt[count];		//calculate the waiting time for each process
      turnaround_time+=time-at[count]; 			//calulate the turnaround time for the each process
      flag=0; 						//set the flag 0 for the next process
    } 
    if(count==n-1) 					//checks if its the last process
      count=0; 						//if so set the count to zero
    else if(at[count+1]<=time) 				//else checks the arrival time of the next process is less than that of the the total elapesed time 
      count++; 						//then go to next process
    else 
      count=0; 						//else goes to the first process
  } 
  printf("\nAverage Waiting Time= %f\n",wait_time*1.0/n); 
  printf("Avg Turnaround Time = %f",turnaround_time*1.0/n); 
  
  return 0; 
}

//-------------------------------------------------------------
//ptint the values
// avwat=(watat*0.1)/n;
    //avtat=(tart*0.1)/n;
    //printf("Average Waiting Time = %d\n",avwat);
    //printf("Average TurnaroundTime = %d\n",avtat);
//}
