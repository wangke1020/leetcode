package com.leetcode.easy;

//Given an integer, write a function to determine if it is a power of three.

public class PowerOfThree {
    public boolean isPowerOfThree(int n) {
        if(n == 0) return false;
        while(n % 3 == 0)
            n = n/3;
        return n == 1;
    }
}
