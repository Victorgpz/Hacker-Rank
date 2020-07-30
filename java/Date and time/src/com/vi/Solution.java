package com.vi;

import java.io.*;
import java.util.Scanner;

public class Solution {
    public static void main(String[] args) throws IOException {
        Scanner in =new Scanner(System.in);
        String[] firstMultipleInput = new String[5];
        int i=0;
        while (i<3){
            firstMultipleInput[i]=in.next();
            i++;
        }
        int month = Integer.parseInt(firstMultipleInput[0]);

        int day = Integer.parseInt(firstMultipleInput[1]);

        int year = Integer.parseInt(firstMultipleInput[2]);

        String res = Result.findDay(month, day, year);

        System.out.println(res);
    }
}
