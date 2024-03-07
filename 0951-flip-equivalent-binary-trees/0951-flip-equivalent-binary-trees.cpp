/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    bool flipEquiv(TreeNode* root1, TreeNode* root2) {
    // base case
	if(root1 == NULL && root2 == NULL) {
		return true;
	}
	if(root1 == NULL || root2 == NULL) {
		return false;
	}
	if(root1->val != root2->val) {
		return false;
	}
	// recursive case

	//1. perfrom a flip op.
	swap(root1->left, root1->right);
	if(flipEquiv(root1->left, root2->left) && flipEquiv(root1->right, root2->right))
        return true;

	//2. do not perform a flip op.
	swap(root1->left, root1->right);    // backtracking
	if(flipEquiv(root1->left, root2->left) && flipEquiv(root1->right, root2->right))
        return true;

	return false;
    }
};