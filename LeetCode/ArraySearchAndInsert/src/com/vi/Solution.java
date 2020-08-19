package com.vi;

import java.util.HashSet;

class Solution {
    public static  int searchInsert(int[] num, int target) {
        int i = 0;
        int j = num.length - 1;

        while (i <= j) {
            int mid = (i + j) / 2;
            if ( target > num[mid] ) {
                i = mid + 1;
            } else if ( target < num[mid] ) {
                j = mid - 1;
            }else {
                return mid;
            }
        }
        return i;
    }
}