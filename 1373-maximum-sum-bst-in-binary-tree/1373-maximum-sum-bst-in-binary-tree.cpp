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
class Data {
public : 
	bool isBST;
	int minVal;
	int maxVal;
	int maxBSTSum;
	int sum;
};
Data helper(TreeNode* root) {
	Data d;
	// base case
	if(root == NULL) {
		d.isBST = true;
		d.minVal = INT_MAX;
		d.maxVal = INT_MIN;
		d.maxBSTSum = 0;
		d.sum = 0;

		return d;
	}

	// recursive case
	Data left = helper(root->left);

	Data right = helper(root->right);

	d.sum = left.sum + right.sum + root->val;
	d.minVal = min(left.minVal, min(right.minVal, root->val));
	d.maxVal = max(left.maxVal, max(right.maxVal, root->val));
	d.isBST = left.isBST && right.isBST && (root->val > left.maxVal && root->val < right.minVal);
	d.maxBSTSum = d.isBST ? max(left.maxBSTSum, max(right.maxBSTSum, d.sum)) : max(left.maxBSTSum, right.maxBSTSum);

	return d;
}
class Solution {
public:
    int maxSumBST(TreeNode* root) {
        Data d = helper(root);
	    return d.maxBSTSum;
    }
};