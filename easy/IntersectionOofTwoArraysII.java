package com.leetcode.easy;

/*
Given two arrays, write a function to compute their intersection.

        Example:
        Given nums1 = [1, 2, 2, 1], nums2 = [2, 2], return [2, 2].

        Note:
        Each element in the result should appear as many times as it shows in both arrays.
        The result can be in any order.
        Follow up:
        What if the given array is already sorted? How would you optimize your algorithm?
        What if nums1's size is small compared to nums2's size? Which algorithm is better?
        What if elements of nums2 are stored on disk, and the memory is limited such that you cannot load all elements into the memory at once?


*/

import java.util.ArrayList;

import java.util.HashMap;
import java.util.HashSet;
import java.util.List;

public class IntersectionOofTwoArraysII {
    public int[] intersect(int[] nums1, int[] nums2) {
        HashMap<Integer, Integer> s = new HashMap<>();
        List<Integer> l = new ArrayList<Integer>();
        for (int i : nums1)
            if (!s.containsKey(i)) s.put(i, 1);
            else s.put(i, s.get(i) + 1);
        for (int i : nums2)
            if (s.containsKey(i) && s.get(i) > 0) {
                l.add(i);
                s.put(i, s.get(i) - 1);
            }
        int[] result = new int[l.size()];
        for (int i = 0; i < l.size(); i++) {
            result[i] = l.get(i);
        }
        return result;
    }
}