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
    
    void helper(TreeNode* root, string s, string& ans) {
        // base case
        if(root == NULL) return;
        if(root->left == NULL && root->right == NULL) {
            s = char(root->val + 'a') + s;
            if(ans > s) {
                ans = s;
            }
            return;
        }
        
        // recursive case
        helper(root->left, char(root->val + 'a') + s, ans);
        helper(root->right, char(root->val + 'a') + s, ans);
    }
    string smallestFromLeaf(TreeNode* root) {
    
        string s = "";
        string ans(25, 'z');
        helper(root, s, ans);
        return ans;
    }
};