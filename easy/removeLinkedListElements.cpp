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
	ListNode* removeElements(ListNode* head, int val)
	{
		while (head && head->val == val)
		{
			ListNode *tmp = head;
			head = head->next;
		}
		if (!head) return nullptr;
		ListNode *p = head->next;
		ListNode *q = head;
		while (p)
		{
			if (p->val == val)
			{
				q->next = p->next;
				p = q->next;
			}
			else
			{
				q = p;
				if (p->next)
					p = p->next;
				else break;
			}

		}
		return head;
	}
};

int main()
{
	ListNode node1 = {1};
	ListNode node2= { 2 };
	ListNode node3 = { 2 };
	ListNode node4 = { 1 };
	node1.next = &node2;
	node2.next = &node3;
	node3.next = &node4;
	Solution s;
	s.removeElements(&node1, 2);
	
	ListNode *p = &node1;
	while (p)
	{
		cout << p->val << endl;
		p = p->next;
	}
	getchar();
	return 0;
}