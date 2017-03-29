#include <iostream>
using namespace std;
struct ListNode
{
	int val;
	ListNode* next;

	ListNode(int x) : val(x), next(NULL) {}
};


class Solution
{
public:
	ListNode* addTwoNumbers(ListNode* l1, ListNode* l2)
	{
		ListNode* head = new ListNode{0};
		ListNode* cur = head;
		int carry = 0;
		ListNode *p = l1, *q = l2;
		while (1)
		{
			int sum = 0;
			if (p && q)
			{
				sum = p->val + q->val + carry;
				p = p->next;
				q = q->next;
			}
			else if (q)
			{
				sum = q->val + carry;
				q = q->next;
			}
			else if (p)
			{
				sum = p->val + carry;
				p = p->next;
			}
			else break;
			
			if (sum > 9)
			{
				sum = sum - 10;
				carry = 1;
			}
			else carry = 0;
			cur->next = new ListNode{ sum };;
			cur = cur->next;
		}
		if (carry) cur->next = new ListNode{ 1 };
		cur = head->next;
		delete head;
		return cur;
	}
};

int main()
{
	ListNode l2{ 2 };
	ListNode l4{ 4 };
	ListNode l3{ 5 };
	l2.next = &l4;
	l4.next = &l3;


	ListNode l5{ 5 };
	ListNode l6{ 6 };
	ListNode l4_2{ 4 };
	l5.next = &l6;
	l6.next = &l4_2;

	Solution s;
	ListNode *p = s.addTwoNumbers(&l2, &l5);
	while (p)
	{
		cout << p->val << " ";
		p = p->next;
	}

	getchar();

	return 0;
}