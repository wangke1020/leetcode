package com.leetcode.easy;

import java.util.ArrayList;
import java.util.List;

// Definition for a binary tree node.
class TreeNode {
    int val;
    TreeNode left;
    TreeNode right;

    TreeNode(int x) {
        val = x;
    }
}

public class BinaryTreePaths {
    public List<String> binaryTreePaths(TreeNode root) {
        ArrayList<String> paths = new ArrayList<>();
        binaryTreePaths(root, "", paths);
        return paths;
    }
    private void binaryTreePaths(TreeNode root, String s, List<String> paths)
    {
        if(root == null){
            if(s.length() > 0) paths.add(s);
            return;
        }
        s += Integer.toString(root.val);
        if(root.left == null && root.right == null){
            paths.add(s);
            return;
        }
        if(root.left != null)  binaryTreePaths(root.left, s + "->", paths);
        if(root.right != null) binaryTreePaths(root.right, s+ "->", paths);
    }
}