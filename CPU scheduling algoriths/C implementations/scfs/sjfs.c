#include<stdio.h>
 int main()
{
    int burstTime[20],p[20],waitingTime[20],turnAroundTime[20],i,j,n,total=0,pos,temp;
    float avg_wt,avg_tat;
    printf("Enter number of process:");
    scanf("%d",&n);
  
    printf("nEnter Burst Time:");
    for(i=0;i<n;i++)
    {
        printf("p%d:",i+1);
        scanf("%d",&burstTime[i]);
        p[i]=i+1;         
    }
  
  
    for(i=0;i<n;i++)
    {
        pos=i;
        for(j=i+1;j<n;j++)
        {
            if(burstTime[j]<burstTime[pos])
                pos=j;
        }
  
        temp=burstTime[i];
        burstTime[i]=burstTime[pos];
        burstTime[pos]=temp;
  
        temp=p[i];
        p[i]=p[pos];
        p[pos]=temp;
    }
   
    waitingTime[0]=0;            
  
   
    for(i=1;i<n;i++)
    {
        waitingTime[i]=0;
        for(j=0;j<i;j++)
            waitingTime[i]+=burstTime[j];
  
        total+=waitingTime[i];
    }
  
    avg_wt=(float)total/n;      
    total=0;
  
    printf("Processt    Burst Time   Waiting time Turnaround Time\n");
    for(i=0;i<n;i++)
    {
        turnAroundTime[i]=burstTime[i]+waitingTime[i];   
        total+=turnAroundTime[i];
        printf("%d\t\t%d\t\t%d\t\t%d\n",p[i],burstTime[i],waitingTime[i],turnAroundTime[i]);
    }
  
    avg_tat=(float)total/n;    
    printf("Average Waiting Time=%f\n",avg_wt);
    printf("Average Turnaround Time=%f",avg_tat);
}
