/**
* Definition for singly-linked list.
* struct ListNode {
*     int val;
*     ListNode *next;
*     ListNode(int x) : val(x), next(NULL) {}
* };
*/


#include <iostream>
using namespace std;
struct ListNode {
	int val;
	ListNode *next;
	ListNode(int x) : val(x), next(NULL) {}
};
class Solution {
public:
	ListNode* reverseList_iterative(ListNode *head)
	{
		ListNode *pre = nullptr, *next = nullptr;
		while (head)
		{
			next = head->next;      //save the current's next node 
			head->next = pre;       //let the current point to its previous one
			pre = head;             //save the current node as pre
			head = next;            //move to next node
		}
		return pre;                   //just point to the last node we wanted
	}
};

int main()
{
	return 0;
}