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
    void helper(TreeNode*& root, int val, int depth, int curDep) {
        // base case
        if(root == NULL) return;
        if(depth == 1) {
            TreeNode* cur = new TreeNode(val);
            cur->left = root;
            root = cur;
            cout << cur->val << endl;
            cout << root->val << endl;
            return;
        }
        if(curDep == depth - 1) {
            TreeNode* prevLeft = root->left;
            TreeNode* prevRight = root->right;
            root->left = new TreeNode(val);
            root->right = new TreeNode(val);
            root->left->left = prevLeft;
            root->right->right = prevRight;
            return;
        }
        // recursive case
        helper(root->left, val, depth, curDep+1);
        helper(root->right, val, depth, curDep+1);
    }
    TreeNode* addOneRow(TreeNode* root, int val, int depth) {
        helper(root, val, depth, 1);
        return root;
    }
};