package com.vi;

import java.util.LinkedList;
import java.util.List;
import java.util.Queue;
import java.util.Random;

public class Main {

    public static void main(String[] args) {
        List<Process> processList=new LinkedList<>();
        Random rn=new Random();
        int quantum=10;
        for (int i=1;i<11;i++){
            processList.add(new Process("p"+i,rn.nextInt(10)));
        }
        int[] waitingTime=waitingTime(processList,quantum);
        int[] turnAroundTime=turnAroundTime(processList,waitingTime);
        printList(processList,waitingTime,turnAroundTime);
    }


    public static int[] waitingTime(List<Process> list,int quantum){
        int[] remainingBurstTime=new int[list.size()];
        int[] waitingTime=new int[list.size()];
        int i=0;
        for (Process process: list){
            remainingBurstTime[i]=process.getBurstTime();
            i++;
        }
        int time=0;
        while (true){
            boolean flag=true;
            for (i=0;i<list.size();i++){
                if(remainingBurstTime[i]>0){
                    flag=false;
                    if(remainingBurstTime[i]>quantum){
                        time+=quantum;
                        remainingBurstTime[i]-=quantum;
                    }else {
                        time+=remainingBurstTime[i];
                        waitingTime[i]=time-list.get(i).getBurstTime();
                        remainingBurstTime[i]=0;
                    }
                }
            }
            if(flag){
                break;
            }
        }
        return waitingTime;
    }
    public static int[] turnAroundTime(List<Process> list,int[] waitingTime){
        int[] turnAroundTime=new int[list.size()];
        for (int i=0;i<list.size();i++){
            turnAroundTime[i]=list.get(i).getBurstTime()+waitingTime[i];
        }
        return turnAroundTime;
    }

    public static void printList(List<? extends Process> list, int[] waitingTime, int[] turnAroundTime){
        System.out.println("Process\tBurst time\tWaiting Time\tTurn around time");
        for (int i=0;i<list.size();i++){
            System.out.println(list.get(i).getProcessId()+"\t\t\t"+list.get(i).getBurstTime()+"\t\t\t"+waitingTime[i]+"\t\t\t"+turnAroundTime[i]);
        }
        float averageWaitingTime=AverageTime(waitingTime);
        System.out.println("Average waiting time :"+averageWaitingTime);
        float averageTurnAroundTime=AverageTime(turnAroundTime);
        System.out.println("Average turn Around time :"+averageTurnAroundTime);


    }


    public static int AverageTime(int[] Time){
        int avg=0;
        for (int i:Time){
            avg+=(float)i;
        }
        return avg/=Time.length;
    }
}
