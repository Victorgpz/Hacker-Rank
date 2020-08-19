package com.vi;
import java.util.*;

public class Main {

    public static void main(String[] args) {
        Random rn=new Random();
        List<Process> processList=new ArrayList<>();
        for (int i=0;i<11;i++){
            processList.add(new Process("p"+i,rn.nextInt(10),rn.nextInt(5)));
        }

        Collections.sort(processList, new Comparator<Process>() {
            @Override
            public int compare(Process o1, Process o2) {
                if(o1.getPriority()<o2.getPriority()){
                    return -1;
                }else if(o1.getPriority()>o2.getPriority()){
                    return 1;
                }else {
                    return 0;
                }
            }
        });

        int[] waitingTime=waitingTime(processList);
        int[] turnAroundTime=turnAroundTime(processList,waitingTime);
        printList(processList,waitingTime,turnAroundTime);

    }
    public static int[] waitingTime(List<? extends Process> list){
        int[] waitingTime =new int[list.size()];
        for (int i=1;i<list.size();i++){
            waitingTime[i]=list.get(i-1).getBurstTime()+waitingTime[i-1];
        }
        return waitingTime;
    }

    public static int[] turnAroundTime(List<? extends  Process> list, int[] waitingTime){
        int[] turnAroundTime=new int[list.size()];
        for (int i=0;i<list.size();i++){
            turnAroundTime[i]=list.get(i).getBurstTime()+waitingTime[i];
        }
        return turnAroundTime;
    }
    public static void printList(List<? extends Process> list, int[] waitingTime, int[] turnAroundTime){
        System.out.println("Process\tPriority\tBurst time\tWaiting Time\tTurn around time");
        for (int i=0;i<list.size();i++){
            System.out.println(list.get(i).getProcessId()+"\t\t\t"+list.get(i).getPriority()+"\t\t\t"+list.get(i).getBurstTime()+"\t\t\t"+waitingTime[i]+"\t\t\t"+turnAroundTime[i]);
        }
        float averageWaitingTime=AverageWaitingTime(waitingTime);
        System.out.println("Average waiting time :"+averageWaitingTime);
        float averageTurnAroundTime=AverageTurnAroundTime(turnAroundTime);
        System.out.println("Average turn Around time :"+averageTurnAroundTime);


    }
    public static float AverageWaitingTime(int[] waitingTime){
        float avg=0;
        for (int i:waitingTime){
            avg+=(float)i;
        }
        return avg/=waitingTime.length;
    }
    public static float AverageTurnAroundTime(int[] turnAroundTime){
        float avg=0;
        for (int i:turnAroundTime){
            avg+=(float)i;
        }
        return avg/=turnAroundTime.length;
    }
}