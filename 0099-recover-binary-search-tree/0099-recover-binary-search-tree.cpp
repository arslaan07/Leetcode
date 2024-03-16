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
    void storeInorder(TreeNode* root, vector<TreeNode*>& inOrder) {
	// base case
	if(root == NULL) {
		return;
	}

	// recursive case
	storeInorder(root->left, inOrder);

	inOrder.push_back(root);

	storeInorder(root->right, inOrder);
    }
    void recoverTree(TreeNode* root) {
    vector<TreeNode*> inOrder;
	storeInorder(root, inOrder);
	cout << endl;
	TreeNode* first = NULL;
	TreeNode* second = NULL;
	for(int i=1; i<inOrder.size(); i++) {
		if(inOrder[i]->val < inOrder[i-1]->val) {
			if(first == NULL) {
				first = inOrder[i-1];
			}
			second = inOrder[i];
		}
	}
	swap(first->val, second->val);
    }
};