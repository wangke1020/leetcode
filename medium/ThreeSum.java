package com.leetcode.medium;

import java.util.*;

public class ThreeSum {
        public List<List<Integer>> threeSum(int[] nums) {
            Arrays.sort(nums);
            List<List<Integer>> retList = new ArrayList<>();
            Set<List<Integer>> set = new HashSet<>();
            for(int i=0;i<nums.length-2;i++){
                int start = i+1;
                int end = nums.length - 1;
                while(start < end){
                    int sum = nums[i] + nums[start] + nums[end];
                    if(sum == 0){
                        ArrayList<Integer> l = new ArrayList<>();
                        l.add(nums[i]);
                        l.add(nums[start]);
                        l.add(nums[end]);
                        set.add(l);
                        ++start;
                        --end;
                    }else if(sum > 0){
                        --end;
                    }else {
                        ++start;
                    }
                }
            }
            retList.addAll(set);
            return retList;
        }

    public static void main(String[] args) {
        ThreeSum ts = new ThreeSum();
        int[] nums = new int[] {0, 0, 0, 0, 0, 0};
        List<List<Integer>> l = ts.threeSum(nums);
        for (List<Integer> x: l)
        {
            System.out.print('(');
            for(Integer i : x)
                System.out.printf("%d ", i);
            System.out.println(')');
        }
    }
}
