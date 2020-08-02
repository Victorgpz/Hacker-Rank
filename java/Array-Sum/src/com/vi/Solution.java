package com.vi;

import java.util.ArrayList;
import java.util.Collections;
import java.util.LinkedList;
import java.util.List;

public class Solution {

    public static List<Long> performOperation(int n,List<Integer> op){
        List<Long> Sum=new LinkedList<>();
        ArrayList<Integer> arrayList=new ArrayList<>();
        for (int i=1;i<=n;i++){
            arrayList.add(i);
        }

        for (int i=0;i<op.size();i++) {

            if ( arrayList.contains(op.get(i)) ) {
                Collections.swap(arrayList, 0, arrayList.size() - 1);
            } else {
                arrayList.set(arrayList.size()-1,op.get(i));
            }
            Sum.add(sum(arrayList));

        }
        return Sum;
    }
    private static long sum(ArrayList<Integer> arrayList){
        long sum=0;
        for (int i : arrayList){
            sum+=i;
        }
        return sum;
    }
}
