package com.vi;

public class Main {

    public static void main(String[] args) {
	int[] arr=new int[11];
	for(int i=0;i<11;i++){
	    arr[i]=i+1;
    }
        System.out.println(Solution.searchInsert(arr,3));
    }
}
