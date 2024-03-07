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
    void findPath(TreeNode* root,int targetSum,vector<int>& temp,vector<vector<int>>& ans) {
        // base case
        if(root == NULL) {
            return;
        }
        if(root->left == NULL && root->right == NULL) {
            if(targetSum - root->val == 0) {
                temp.push_back(root->val);
                ans.push_back(temp);
                temp.pop_back();
            }
            return;
        }
        
        // recursive case
        temp.push_back(root->val);
        
        findPath(root->left, targetSum - root->val, temp, ans);
     
        findPath(root->right, targetSum - root->val, temp, ans);
        
        temp.pop_back();
    }
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<int> temp;
        vector<vector<int>> ans;
        findPath(root, targetSum, temp, ans);
        return ans;
    }
};