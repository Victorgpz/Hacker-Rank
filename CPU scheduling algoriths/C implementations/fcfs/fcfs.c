#include<stdio.h>  

void findWaitingTime(int processes[], int n,int burstTime[], int waitingTime[])  
{  
    waitingTime[0] = 0;  
    for (int  i = 1; i < n ; i++ ){
        waitingTime[i] =  burstTime[i-1] + waitingTime[i-1] ;  
    }
}

    

void findTurnAroundTime( int processes[], int n,int burstTime[], int waitingTime[], int turnaroundTime[])  
{  
    for (int  i = 0; i < n ; i++){ 
        turnaroundTime[i] = burstTime[i] + waitingTime[i];
    }  
}  
    
 
void findavgTime( int processes[], int n, int burstTime[])  
{  
    int waitingTime[n], turnaroundTime[n], total_wt = 0, total_tat = 0;  
    findWaitingTime(processes, n, burstTime, waitingTime);  
    findTurnAroundTime(processes, n, burstTime, waitingTime, turnaroundTime);  
    printf("Processes   Burst time   Waiting time   Turn around time\n");  

    for (int  i=0; i<n; i++)  
    {  
        total_wt = total_wt + waitingTime[i];  
        total_tat = total_tat + turnaroundTime[i];  
        printf("   %d ",(i+1)); 
        printf("        %d ", burstTime[i] ); 
        printf("                %d",waitingTime[i] ); 
        printf("                  %d\n",turnaroundTime[i] );  
    }  

    int s=(float)total_wt / (float)n; 
    int t=(float)total_tat / (float)n; 
    printf("Average waiting time = %d",s); 
    printf("\n"); 
    printf("Average turn around time = %d ",t);  
}  
    
 
int main()  
{  
    
    int processes[] = { 1, 2, 3};  
    int n = sizeof processes / sizeof processes[0];  
    int  burst_time[] = {10, 5, 8};  
    findavgTime(processes, n,  burst_time);  
    return 0;  
} 

--------
/*avwt = avwt/n;
    avtat = avtat/n;
    printf("\nAverege Waiting Time %d",avwt);
    printf("\nAverege Turn Around Time %d\n",avtat);*/
