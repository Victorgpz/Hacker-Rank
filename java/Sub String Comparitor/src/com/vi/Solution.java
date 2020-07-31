package com.vi;

import java.util.HashSet;

public class Solution {
    public static String twoStrings(String s1,String s2){
        //too slow,failed some test cases

//      boolean flag=false;
//        for (int i=0;i<s1.length();i++){
//            for (int j=0;j<s2.length();j++){
//                if(s1.charAt(i)==s2.charAt(j)) {
//
//                    flag = true;
//                    break;
//                }
//            }
//            if(flag){
//                break;
//            }
//
//        }
//        if(flag){
//            return "YES";
//        }else {
//            return "NO";
        HashSet<Character> h1=new HashSet<>();
        HashSet<Character> h2=new HashSet<>();
        for (int i=0;i<s1.length();i++){
            h1.add(s1.charAt(i));
       }
        for (int i=0;i<s2.length();i++){
            h2.add(s2.charAt(i));
        }
        h1.retainAll(h2);
        if(h1.isEmpty()){
            return "NO";
        }else {
            return "YES";
        }

    }
}
