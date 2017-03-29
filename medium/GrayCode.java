package com.leetcode.medium;

import java.util.ArrayList;
import java.util.List;

/*
    The gray code is a binary numeral system where two successive values differ in only one bit.

    Given a non-negative integer n representing the total number of bits in the code, print the sequence of gray code. A gray code sequence must begin with 0.

    For example, given n = 2, return [0,1,3,2]. Its gray code sequence is:

    00 - 0
    01 - 1
    11 - 3
    10 - 2
 */
public class GrayCode {
    public List<Integer> grayCode(int n) {
        List<Integer> list = new ArrayList<Integer>();
        list.add(0);
        for(int i = 1; i < Math.pow(2, n); i*=2){
            for(int j = list.size()-1; j>=0; j--){
                list.add(i + list.get(j));
            }
        }
        return list;

    }
}
