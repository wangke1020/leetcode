package com.leetcode.medium;

/**
 Given an array of non-negative integers, you are initially positioned at the first index of the array.

 Each element in the array represents your maximum jump length at that position.

 Determine if you are able to reach the last index.

 For example:
 A = [2,3,1,1,4], return true.

 A = [3,2,1,0,4], return false.
 */
public class JumpGame {
    public boolean canJump(int[] nums) {
        int maxReach = 0;
        for (int i = 0; i < nums.length-1; i++) {
            maxReach = Math.max(maxReach, nums[i] + i);
            if (maxReach <= i) return false;
            if (maxReach >= nums.length-1) return true;
        }
        return true;
    }

    public static void main(String[] args) {
        int [] nums = new int[]{1,1,1,1};
        JumpGame jg = new JumpGame();
        System.out.println(jg.canJump(nums));
    }
}
