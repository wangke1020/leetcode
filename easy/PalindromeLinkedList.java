package com.leetcode.easy;

//Given a singly linked list, determine if it is a palindrome.



public class PalindromeLinkedList {
    public boolean isPalindrome(ListNode head) {
        if(head==null || head.next==null) return true;
        ListNode slow = head;
        ListNode fast = head;
        while(fast.next!=null && fast.next.next!=null){
            fast = fast.next.next;
            slow = slow.next;
        }
        ListNode next = slow.next.next;
        ListNode tail = slow.next;

        //Invert half list
        while(next!=null){
            ListNode temp = slow.next;
            slow.next = next;
            tail.next = next.next;
            next.next = temp;
            next = tail.next;
        }

        while(slow.next!=null){
            if(head.val != slow.next.val){
                return false;
            }
            slow = slow.next;
            head = head.next;
        }
        return true;
    }
}
