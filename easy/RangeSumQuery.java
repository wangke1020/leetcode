package com.leetcode.easy;

//Given an integer array nums, find the sum of the elements between indices i and j (i ≤ j), inclusive.
//
//        Example:
//        Given nums = [-2, 0, 3, -5, 2, -1]
//
//        sumRange(0, 2) -> 1
//        sumRange(2, 5) -> -1
//        sumRange(0, 5) -> -3

import java.util.ArrayList;
import java.util.Collections;

class NumArray {

    private int[] nums;
    private int[] sum;

    public NumArray(int[] nums) {
        if (nums == null || nums.length == 0)
            return;
        this.nums = nums;
        int len = nums.length;
        sum = new int[len];
        sum[0] = nums[0];
        for (int i = 1; i < len; i++)
            sum[i] = sum[i - 1] + nums[i];
    }

    public int sumRange(int i, int j) {

        return sum[j] - sum[i] + nums[i];
    }
}

