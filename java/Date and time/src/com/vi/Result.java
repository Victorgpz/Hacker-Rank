package com.vi;

import java.io.*;
import java.time.LocalDate;
import java.util.Calendar;

public class Result {

    /*
     * Complete the 'findDay' function below.
     *
     * The function is expected to return a STRING.
     * The function accepts following parameters:
     *  1. INTEGER month
     *  2. INTEGER day
     *  3. INTEGER year
     */

    public static String findDay(int month, int day, int year) {
        LocalDate lt=LocalDate.of(year,month,day);
        return lt.getDayOfWeek().toString().toUpperCase();

    }

}

