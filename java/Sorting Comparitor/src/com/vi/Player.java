package com.vi;

public class Player {
    private String name;
    private int Score;

    public Player(String name, int score) {
        this.name = name;
        Score = score;
    }

    public String getName() {
        return name;
    }

    public int getScore() {
        return Score;
    }
}
