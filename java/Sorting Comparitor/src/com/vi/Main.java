package com.vi;
//https://www.hackerrank.com/challenges/ctci-comparator-sorting/problem?h_l=interview&playlist_slugs%5B%5D=virtusa

import org.jetbrains.annotations.NotNull;

import java.lang.reflect.Array;
import java.util.*;

public class Main {
    public static Scanner in = new Scanner(System.in);


    public static void main(String[] args) {

        int n = in.nextInt();
        Player[] players = new Player[n];
        populatePlayers(players);
        printPlayer(players);
        Arrays.sort(players, new Comparator<Player>() {
            @Override
            public int compare(Player o1, Player o2) {
                if (o1.getScore() > o2.getScore()) {
                    return -1;
                } else if (o1.getScore() < o2.getScore()) {
                    return 1;
                } else {
                    return o1.getName().compareTo(o2.getName());
                }
            }
        });
        printPlayer(players);

    }

    public static void populatePlayers(Player @NotNull [] players) {
        Random random = new Random();
        String[] names = {"qqwd", "weqrdew", "ewdf", "werf", "ewrf"};
        for (int i = 0; i < players.length; i++) {
            int score = random.nextInt(200);
            int name = random.nextInt(names.length);
            players[i] = new Player(names[name], score);
        }

    }

    public static void printPlayer(Player[] players) {
        System.out.println("==============");
        for (int i = 0; i < players.length; i++) {
            System.out.println(players[i].getName() + " : " + players[i].getScore());
        }
    }
}
