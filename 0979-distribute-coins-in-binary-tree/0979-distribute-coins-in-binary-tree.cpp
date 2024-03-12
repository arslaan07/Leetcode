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
    int numMoves = 0;
    int helper(TreeNode* root) {
	// base case
        if(root == NULL) {
		return 0;
	}

	// recursive case
	int leftReq = helper(root->left);
	int rightReq = helper(root->right);

	numMoves += abs(leftReq) + abs(rightReq);

	return (leftReq+rightReq+1) - root->val;
}
    int distributeCoins(TreeNode* root) {
        helper(root);
	return numMoves;
    }
};