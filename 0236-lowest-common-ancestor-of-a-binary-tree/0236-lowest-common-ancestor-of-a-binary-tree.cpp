/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
    // base case
	if(root == NULL) {
		return root;
	}
	if(root == p || root == q) {
		return root;
	}

	// recursive case

	TreeNode* LST = lowestCommonAncestor(root->left, p, q);
	TreeNode* RST = lowestCommonAncestor(root->right, p, q);

	if(LST == NULL) return RST;
	if(RST == NULL) return LST;

	// LST != NULL && RST != NULL
	return root;
    }
};