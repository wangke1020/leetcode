#include  <iostream>
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

struct TreeNode 
{
	int val;
	TreeNode *left;
	TreeNode *right;
	TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};
class Solution {
public:

	bool isSymmetricRecursive(TreeNode*a, TreeNode*b){
		if (a){
			return b && a->val == b->val &&
				isSymmetricRecursive(a->left, b->right) &&
				isSymmetricRecursive(a->right, b->left);
		}
		return !b;
	}
	bool isSymmetric(TreeNode*root){
		return !root || isSymmetricRecursive(root->left, root->right);
	}
};