#include<iostream>
#include<vector>
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
	vector<vector<int> > levelOrderBottom(TreeNode *root) 
	{
		vector<vector<int> > ret_vec;
		return ret_vec;
	}
	void printBinaryTree(TreeNode *root)
	{
		if (root)
		{
			cout << root->val << "\t";
			if (root->left)
			{
				cout << root->left->val << "\t";

			}
			if (root->right)
			{
				cout << root->right->val << "\t";

			}
			
			printBinaryTree(root->left);
			printBinaryTree(root->right);
			cout << endl;
		}
	}
};
void main()
{
	Solution s;
	TreeNode root(3);
	TreeNode l1(9);
	root.left = &l1;
	TreeNode l2(20);
	root.right = &l2;
	TreeNode l3(15);
	l1.left = &l3;
	TreeNode  l4(7);
	l2.right = &l4;
	s.printBinaryTree(&root);
	system("pause");

	
}