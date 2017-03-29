/*
Binary Tree Level Order Traversal

Given a binary tree, return the level order traversal of its nodes' values. (ie, from left to right, level by level).

For example:
Given binary tree {3,9,20,#,#,15,7},
 3
/ \
9  20
/  \
15   7
return its level order traversal as:
[
[3],
[9,20],
[15,7]
]

*/

#include <iostream>
#include <vector>
#include <queue>
using namespace std;

/**
* Definition for a binary tree node.
* struct TreeNode {
*     int val;
*     TreeNode *left;
*     TreeNode *right;
*     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
* };
*/

struct TreeNode {
	int val;
	TreeNode *left;
	TreeNode *right;
	TreeNode(int x) : val(x), left(NULL), right(NULL) {}
	
};
class Solution {
public:
	vector<vector<int> > levelOrder(TreeNode *root) {
		vector<vector<int> > retVal;

		levelOrder(root, retVal, 0);

		return retVal;
	}

	void levelOrder(TreeNode* root, vector<vector<int> > &v, int currLevel) {
		if (root == NULL) {
			return;
		}

		if (v.empty() || currLevel > (v.size() - 1)) {
			v.push_back(vector<int>());
		}

		v[currLevel].push_back(root->val);

		levelOrder(root->left, v, currLevel + 1);
		levelOrder(root->right, v, currLevel + 1);
	}
};

void printLevelOrder(TreeNode* root)
{
	queue<TreeNode*> q;
	q.push(root);
	while (!q.empty())
	{
		TreeNode* node = q.front();
		q.pop();
		cout << node->val << endl;
		if (node->left) q.push(node->left);
		if (node->right) q.push(node->right);
		cout << endl;
	}
}

void main()
{
	TreeNode node3 = { 3 };
	TreeNode node9 = { 9 };
	TreeNode node5 = { 5 };
	TreeNode node20 = { 20 };
	TreeNode node15 = { 15 };
	TreeNode node7 = { 7 }; 
	node3.left = &node9;
	node9.left = &node5;
	node3.right = &node20;
	node20.left = &node15;
	node20.right = &node7;
	printLevelOrder(&node3);
	getchar();
}