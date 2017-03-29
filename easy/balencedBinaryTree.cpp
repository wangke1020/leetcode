#include  <iostream>
#include <algorithm>

struct TreeNode
{
	int val;
	TreeNode *left;
	TreeNode *right;
	TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};
class Solution {
public:
	int height(TreeNode *root)
	{
		if (root == NULL) return 0;
		int hl = height(root->left);
		int hr = height(root->right);
		if (hl == -1 || hr == -1 || abs(hl - hr) > 1) return -1;
		return std::max(hl, hr) + 1;
	}
	bool isBalanced(TreeNode *root) {
		return height(root) != -1;
	}
};