package com.company;

import java.util.Arrays;
import java.util.LinkedList;

public class Main {

    public static void main(String[] args) {
        LinkedList<Student> students= new LinkedList<>(Arrays.asList(
                new Student(10,"age"),
                new Student(20,"vic"),
                new Student(30,"ann")
        ));

        for (Student s:students){
            s.print();
        }
    }
}
