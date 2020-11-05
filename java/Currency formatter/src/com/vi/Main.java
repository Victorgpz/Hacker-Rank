package com.vi;

import java.text.NumberFormat;
import java.util.Locale;
import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
        // write your code here
        Scanner input = new Scanner(System.in);
        double currency = input.nextDouble();
        Locale in = new Locale("en", "IN");
        NumberFormat us = NumberFormat.getCurrencyInstance(Locale.US);
        NumberFormat ind = NumberFormat.getCurrencyInstance(new Locale("en", "IN"));
        NumberFormat china = NumberFormat.getCurrencyInstance(Locale.CHINA);
        NumberFormat france = NumberFormat.getCurrencyInstance(Locale.FRANCE);

        System.out.println("US: " + us.format(currency));
        System.out.println("India: " + ind.format(currency));
        System.out.println("China: " + china.format(currency));
        System.out.println("France: " + france.format(currency));
    }
}
