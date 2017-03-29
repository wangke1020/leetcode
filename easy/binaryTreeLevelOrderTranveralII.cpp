#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;

// Definition for binary tree
struct TreeNode {
	int val;
	TreeNode *left;
	TreeNode *right;
	TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};
class Solution {
public:
	vector<vector<int>> levelOrderBottom(TreeNode* root) 
	{
		vector<vector<int>> retVal;
		int h = height(root);
		for (int i = 0; i < h; i++)
		{
			retVal.push_back(vector<int>());
		}
		levelOrder(root, retVal, h - 1);

		return retVal;
	}
	int height(TreeNode* root)
	{
		if (!root) return 0;
		else return 1 + max(height(root->left), height(root->right));
	}



	void levelOrder(TreeNode* root, vector<vector<int>>& v, int currLevel)
	{
		if (root == NULL)
		{
			return;
		}
		v[currLevel].push_back(root->val);

		levelOrder(root->left, v, currLevel -1 );
		levelOrder(root->right, v, currLevel - 1);
	}
	
};

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
	Solution s;
	auto v = s.levelOrderBottom(&node3);
	for (auto item : v)
	{
		for (auto i : item)
		{
			cout << i << " ";
		}
		cout << endl;
	}
	getchar();
}