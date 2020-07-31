package com.vi;

import java.util.HashMap;
import java.util.Scanner;

public class Solution {
    private String name;
    private int phoneNumber;
    Scanner in=new Scanner(System.in);
    HashMap<String,Integer> map=new HashMap<>();

    public  void sol(){
        int n=in.nextInt();
        for(int i=0;i<n;i++){
            System.out.println("enter data");
            name=in.nextLine();
            phoneNumber=in.nextInt();
            in.nextLine();
            map.put(name,phoneNumber);
        }
        while (in.hasNext()) {
            String query = null;
            query = in.nextLine().trim();
            if ( map.containsKey(query) ) {
                System.out.println(query + "=" + map.get(query));
            } else {
                System.out.println("Not found");
            }
            in.close();
        }
    }
}
