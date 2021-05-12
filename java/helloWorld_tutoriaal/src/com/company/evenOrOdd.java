package com.company;

import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.Scanner;

public class evenOrOdd {
    public static void main(String[] args) {
        Scanner in =new Scanner(System.in);
        System.out.println("enter a number ");
        int isEven=in.nextInt();

        if(isEven%2==0){
            System.out.println("even no");
        }else {
            System.out.println("odd no");
        }

    }

}
