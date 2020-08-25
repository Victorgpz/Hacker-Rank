package com.vi;

public class Process {
    private final String processId;
    private int burstTime;
    private final int priority;

    public Process(String processId, int burstTime, int priority) {
        this.processId = processId;
        this.burstTime = burstTime;
        this.priority = priority;
    }

    public String getProcessId() {
        return processId;
    }

    public int getBurstTime() {
        return burstTime;
    }

    public int getPriority() {
        return priority;
    }
}