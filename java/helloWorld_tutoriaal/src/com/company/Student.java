package com.company;

public class Student {
    public  int age;
    public  String name;

    public Student(int i, String name) {
        this.age=i;
        this.name=name;
    }

    public  void print(){
        System.out.println("Age :"+age+"\nName :"+name);
    }

}
