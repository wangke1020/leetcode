#include <iostream>
using namespace std;
// Definition for binary tree
struct TreeNode {
	int val;
	TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 };


class Solution
{
public:
	bool hasPathSum(TreeNode *root, int sum) {
		if (root == NULL) return false;
		if (root->val == sum && root->left == NULL && root->right == NULL) return true;
		return hasPathSum(root->left, sum - root->val) || hasPathSum(root->right, sum - root->val);
	}
};
int main()
{
	TreeNode root{ 5 }, node4{ 4 }, node8{ 8 }, node11{ 11 },
		node13{ 13 }, node4_2{ 4 }, node7{ 7 },
		node2{ 2 }, node1{ 1 };
	root.left = &node4;
	root.right = &node8;
	node4.left = &node11;
	node8.left = &node13;
	node8.right = &node4_2;
	node11.left = &node7;
	node11.right = &node2;
	node4_2.right = &node1;

	Solution s;
	if (s.hasPathSum(&root, 22))
		cout << true << endl;
	getchar();

	
}