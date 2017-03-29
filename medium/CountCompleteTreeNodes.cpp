#include <iostream>
using namespace std;
struct TreeNode
{
	int val;
	TreeNode *left;
	TreeNode *right;
	TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};
class Solution {
public:
	int countNodes(TreeNode* root)
	{
		int depth = 0;
		TreeNode *p = root;
		while (p)
		{
			++depth;
			p = p->right;
		}
		int num = pow(2, depth - 1) - 1;
		num += countLastNum(root, 0, depth);
		return num;

	}
	int countLastNum(TreeNode *node, int cur_depth, int depth)
	{
		if (cur_depth == depth)
		{
			if (node) return 1;
		}
		else
			return countLastNum(node->left, cur_depth + 1, depth) + countLastNum(node->right, cur_depth + 1, depth);
	}
};
int main()
{
	TreeNode root{ 0 };
	TreeNode node1{ 1 };
	TreeNode node2{ 2 };
	TreeNode node3{ 3 };
	TreeNode node4{ 4 };
	TreeNode node5{ 5 };
	root.left = &node1;
	root.right = &node2;
	node1.left = &node3;
	node1.right = &node4;
	node2.left = &node5;

	Solution s;
	cout << s.countNodes(&root) << endl;
	getchar();
	return 0;
}