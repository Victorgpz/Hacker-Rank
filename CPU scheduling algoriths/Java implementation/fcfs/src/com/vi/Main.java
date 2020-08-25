package com.vi;
import org.jetbrains.annotations.NotNull;
import java.util.ArrayList;
import java.util.List;

public class Main {

    public static void main(String[] args) {
        List<Process> processList=new ArrayList<>();
        for (int i=1;i<10;i++){
            processList.add(new Process(i,i*2));
        }

        int[] waitingTime=waitingTime(processList);
        int[] turnAroundTime=turnAroundTime(processList,waitingTime);
        printList(processList,waitingTime,turnAroundTime);

    }

    public static int @NotNull [] waitingTime(List<? extends Process> list){
        int[] waitingTime =new int[list.size()];
        for (int i=1;i<list.size();i++){
            waitingTime[i]=list.get(i-1).getBurstTime()+waitingTime[i-1];
        }
        return waitingTime;
    }
    public static int @NotNull [] turnAroundTime(List<? extends  Process> list, int[] waitingTime){
        int[] turnAroundTime=new int[list.size()];
        for (int i=0;i<list.size();i++){
            turnAroundTime[i]=list.get(i).getBurstTime()+waitingTime[i];
        }
        return turnAroundTime;
    }
    public static void printList(@NotNull List<? extends Process> list, int[] waitingTime, int[] turnAroundTime){
        System.out.println("Process\tBurst time\tWaiting Time\tTurn around time");
        for (int i=0;i<list.size();i++){
            System.out.println(list.get(i).getProcessId()+"\t\t\t"+list.get(i).getBurstTime()+"\t\t\t"+waitingTime[i]+"\t\t\t"+turnAroundTime[i]);
        }
      float averageWaitingTime=AverageTime(waitingTime);
      System.out.println("Average waiting time :"+averageWaitingTime);
      float averageTurnAroundTime=AverageTime(turnAroundTime);
      System.out.println("Average turn Around time :"+averageTurnAroundTime);


    }
    public static float AverageTime(int @NotNull [] Time){
        float avg=0;
        for (int i:Time){
            avg+=(float)i;
        }
       return avg/=Time.length;
    }

}
