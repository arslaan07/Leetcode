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
    pair<int, int> robTopDownSpaceOptimized(TreeNode* root) {
	// base case
	if(root == NULL) {
		return {0,0};
	}
	// recusive case
	auto[leftDontRob, leftRob] = robTopDownSpaceOptimized(root->left);
	auto[rightDontRob, rightRob] = robTopDownSpaceOptimized(root->right);

	int x = max(leftDontRob, leftRob);
	int y = max(rightDontRob, rightRob);
	int z = leftDontRob + rightDontRob + root->val;
	return {x+y, z};
}
    int rob(TreeNode* root) {
       pair<int, int> p = robTopDownSpaceOptimized(root);
        return max(p.first, p.second);
    }
};