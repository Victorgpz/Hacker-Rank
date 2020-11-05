package com.vi;

//https://www.hackerrank.com/challenges/java-abstract-class/problem
public class Main {

    public static void main(String[] args) {
        // write your code here
        MyBook new_novel = new MyBook();
        new_novel.setTitle("title");
        System.out.println("The title is: " + new_novel.getTitle());
    }
}
