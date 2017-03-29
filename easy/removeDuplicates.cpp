
#include <iostream>
#include <unordered_set>
using namespace std;
struct ListNode
{
	int val;
	ListNode* next;

	ListNode(int x) : val(x), next(NULL)
	{
	}
};


class Solution
{
public:
	ListNode* deleteDuplicates(ListNode* head)
	{
		if (!head) return head;
		unordered_set<int>set;
		ListNode* p = head;
		if (p) set.insert(p->val);
		ListNode *q = p->next;
		while (q)
		{
			if (set.find(q->val) != set.end())
			{
				p->next = q->next;
				q->next = nullptr;
				q = p->next;
			}
			else
			{
				set.insert(p->next->val);
				p = q;
				q = q->next;
			}

		}
		return head;
	}
};