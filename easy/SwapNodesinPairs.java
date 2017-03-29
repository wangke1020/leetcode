package com.leetcode.easy;


//Given a linked list, swap every two adjacent nodes and return its head.
//
//        For example,
//        Given 1->2->3->4, you should return the list as 2->1->4->3.
//
//        Your algorithm should use only constant space. You may not modify the values in the list, only nodes itself can be changed.
//


class ListNode {
    int val;
    ListNode next;
    ListNode(int x) { val = x; }
}


public class SwapNodesinPairs {
    public ListNode swapPairs(ListNode head) {
        if (head == null || head.next == null) return head;
        ListNode p = head;
        head = head.next;
        p.next = head.next;
        head.next = p;
        ListNode q;
        ListNode p_front = p;
        p = p.next;
        while (p != null) {
             if((q = p.next) != null) {
               p_front.next = q;
                 p.next = q.next;
                 q.next = p;
                 p_front = p;
                 p = p.next;
            }else return head;
        }
        return head;
    }

    public static void main(String[] args) {
        ListNode head = new ListNode(1);
        ListNode node2 = new ListNode(2);
        head.next = node2;
        ListNode node3 = new ListNode(3);
        node2.next = node3;
//        ListNode node4 = new ListNode(4);
//        node3.next = node4;

        SwapNodesinPairs sp = new SwapNodesinPairs();

        ListNode h = sp.swapPairs(head);
    }
}