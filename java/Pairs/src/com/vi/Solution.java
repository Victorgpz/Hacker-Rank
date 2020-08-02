package com.vi;

import java.util.HashSet;

public class Solution {
    public static int pairs(int k,int[] arr){
        int pair=0;
        HashSet<Integer> set=new HashSet<Integer>(){{
            for (int i: arr){
                add(i);
            }
        }};
        for (int i: set){
            if(set.contains(i+k)){
                pair++;
            }
        }
        return pair;
    }
    public static int pair(int k,int[] arr){
        int pair=0;
        int i=0;
        int j=arr.length-1;
        while (i<j){
            int difference=arr[j]-arr[i];
            if(difference==k){
                pair++;
                i++;
            }else if(difference>k){
                j--;
            }else if(difference<k){
                i++;
            }
        }
        return pair;
    }
}
