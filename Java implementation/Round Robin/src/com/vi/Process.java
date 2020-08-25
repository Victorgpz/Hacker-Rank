package com.vi;

public class Process {
    private String  processId;
    private int burstTime;

    public Process(String processId, int burstTime) {
        this.processId = processId;
        this.burstTime = burstTime;
    }

    public String getProcessId() {
        return processId;
    }

    public int getBurstTime() {
        return burstTime;
    }
}