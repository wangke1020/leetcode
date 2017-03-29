package com.leetcode.medium;

import java.util.ArrayList;
import java.util.List;

/**
 Given an absolute path for a file (Unix-style), simplify it.

 For example,
 path = "/home/", => "/home"
 path = "/a/./b/../../c/", => "/c"
 */
public class SimplifyPath {
    public String simplifyPath(String path) {
        List<String> list = new ArrayList<>();
        String[] paths = path.split("/");
        for(int i=0;i<paths.length;i++){
            String temp = paths[i].trim();
            if(temp.length() == 0 || temp.equals(".")) continue;
            if(temp.equals("..")){
                if(list.size() > 0) list.remove(list.size()-1);
                continue;
            }
            list.add(temp);
        }
        if(list.size() ==0) return "/";
        StringBuilder sb = new StringBuilder();
        for(String element : list) sb.append("/").append(element);
        return sb.toString();
    }

    public static void main(String[] args) {
        String path = "/home//foo/";
        SimplifyPath sp = new SimplifyPath();
        System.out.println(sp.simplifyPath(path));
    }

}
