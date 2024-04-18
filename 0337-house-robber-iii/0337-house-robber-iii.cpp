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
unordered_map<TreeNode*, int> profitMap;
class Solution {
public:
    int rob(TreeNode* root) {
        if(profitMap.find(root) != profitMap.end()) {
		return profitMap[root];
	}
	// base case
	if(root == NULL) {
		return profitMap[root] = 0;
	}
	// recursive case

	// 1. rob at the root node
	int robRoot = root->val;
	if(root->left != NULL)
		robRoot += rob(root->left->left) + rob(root->left->right); 
	if(root->right!= NULL)
		robRoot += rob(root->right->left) + rob(root->right->right); 

	// 2. do not rob at root node
	int doNotRobRoot = rob(root->left) + rob(root->right);

	return profitMap[root] = max(robRoot, doNotRobRoot);
    }
};