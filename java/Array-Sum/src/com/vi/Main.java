package com.vi;

import java.util.ArrayList;
import java.util.Collections;
import java.util.LinkedList;
import java.util.List;
//https://www.hackerrank.com/contests/hack-the-interview-vi-asia-pacific/challenges/maximum-sum-10-1/problem
public class Main {

    public static void main(String[] args) {
        List<Integer> op=new ArrayList<>();
        op.add(4);
        op.add(2);
        List<Long> result =new LinkedList<>(Solution.performOperation(3,op));
//        Collections.swap(op,0,op.size()-1);
           System.out.println(result);


//        ArrayList<Integer> arrayList=new ArrayList<>();
//        long su=0;
//        for (int i=1;i<=10;i++){
//            arrayList.add(i);
//        }
//        System.out.println(arrayList);
//        Collections.swap(arrayList,0,);
    }
}
