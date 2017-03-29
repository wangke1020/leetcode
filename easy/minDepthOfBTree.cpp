/* question:

Minimum Depth of Binary Tree
Given a binary tree, find its minimum depth.
The minimum depth is the number of nodes along the shortest path from the root node down to the nearest leaf node.

*/

#include <iostream>
#include <algorithm>
using namespace std;

//Definition for binary tree
struct TreeNode {
     int val;
     TreeNode *left;
     TreeNode *right;
     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
public:
	int minDepth(TreeNode *root) 
	{
		if (root == NULL) return 0;
		if (root->left == NULL || root->right == NULL) return 1 + max(minDepth(root->left), minDepth(root->right));
		else return 1 + min(minDepth(root->left), minDepth(root->right));
	}
};
int main()
{
	TreeNode root{ 5 }, node4{ 4 }, node8{ 8 }, node11{ 11 },
		node13{ 13 }, node4_2{ 4 }, node7{ 7 },
		node2{ 2 }, node1{ 1 };
	root.left = &node4;
	root.right = &node8;
	//node4.left = &node11;
	////node8.left = &node13;
	//node8.right = &node4_2;
	//node11.left = &node7;
	//node11.right = &node2;
	//node4_2.right = &node1;
	
	Solution s;
	cout << s.minDepth(&root) << endl;
	getchar();
}