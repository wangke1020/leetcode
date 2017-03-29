
//Definition for singly-linked list.
#include <iostream>
#include <string>
using namespace std;
struct ListNode {
     int val;
     ListNode *next;
     ListNode(int x) : val(x), next(NULL) {}
 };

class Solution {
public:
	ListNode* removeNthFromEnd(ListNode* head, int n) {
		if (head->next == NULL)
			return NULL;
		int len = 0;
		ListNode *p = head;
		do
		{
			++len;
			p = p->next;
		} while (p);
		int index = len - n;
		if (index == 0)
		{
			ListNode *q = head;
			head = head->next;
			delete q;
			return head;
		}
		p = head;
		for (int i = 0; i < index-1; i++)
		{
			p = p->next;
		}
		if (n == 1)
		{
			delete p->next;
			p->next = nullptr;
		}
		else
		{
			ListNode *q = p->next;
			p->next = p->next->next;
			delete q;
		}
		return head;
	}
};
int main()
{
	ListNode *header = new ListNode{0};
	ListNode *node1 = new ListNode{ 1 };
	ListNode *node2 = new ListNode{ 2 };
	ListNode *node3 = new ListNode{ 3 };
	header->next = node1;
	node1->next = node2;
	node2->next = node3;
	Solution s;
	s.removeNthFromEnd(header, 2);

	getchar();
	return 0;
}