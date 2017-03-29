package com.leetcode.medium;

import java.util.Arrays;

public class SumClosest {

    //O(n3)
    public int threeSumClosest(int[] nums, int target) {
        int min = nums[0] + nums[1] + nums[2];
        for (int i = 0; i < nums.length; ++i) {
            for (int j = i + 1; j < nums.length; ++j) {
                int twoSum = nums[i] + nums[j];
                for (int k = j + 1; k < nums.length; ++k) {
                    int temp = twoSum + nums[k];
                    if (temp == target) return target;
                    if (Math.abs(temp - target) < Math.abs(min-target)) min = temp;
                }
            }
        }
        return min;
    }

    // O(n2)
    //use 3 pointers to point current element, next element and the last element.
    // If the sum is less than target, it means we have to add a larger element so next element move to the next.
    // If the sum is greater, it means we have to add a smaller element so last element move to the second last element.
    // Keep doing this until the end. Each time compare the difference between sum and target,
    // if it is less than minimum difference so far, then replace result with it, otherwise keep iterating.
    public int fastThreeSumClosest(int[] nums, int target){
        int result = nums[0] + nums[1] + nums[nums.length - 1];
        Arrays.sort(nums);
        for (int i = 0; i < nums.length - 2; i++) {
            int start = i + 1, end = nums.length - 1;
            while (start < end) {
                int sum = nums[i] + nums[start] + nums[end];
                if (sum > target) {
                    end--;
                } else {
                    start++;
                }
                if (Math.abs(sum - target) < Math.abs(result - target)) {
                    result = sum;
                }
            }
        }
        return result;
    }

    public static void main(String[] args) {
        SumClosest sc = new SumClosest();
        int[] nums = new int[] {-1, 2, 1, -4};
        System.out.println(sc.threeSumClosest(nums, 1));
    }
}
