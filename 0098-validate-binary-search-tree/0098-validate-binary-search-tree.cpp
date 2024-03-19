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
class Triple {
public : 
	bool isBST;
	long long minVal;
	long long maxVal;
};
Triple checkBSTEfficient(TreeNode* root) {
	Triple t;
	// base case
	if(root == NULL) {
		t.isBST = true;
		t.minVal = LLONG_MAX;
		t.maxVal = LLONG_MIN;
		return t;
	}
	// recursive case
	Triple left = checkBSTEfficient(root->left);

	Triple right = checkBSTEfficient(root->right);

	bool rootIsBST = root->val > left.maxVal && root->val < right.minVal;

	t.isBST = left.isBST && right.isBST && rootIsBST;
	t.minVal = min(left.minVal, min(right.minVal, (long long)root->val));
	t.maxVal = max(left.maxVal, max(right.maxVal, (long long)root->val));

	return t;
}
class Solution {
public:
    
    bool isValidBST(TreeNode* root) {
        return checkBSTEfficient(root).isBST;
    }
};