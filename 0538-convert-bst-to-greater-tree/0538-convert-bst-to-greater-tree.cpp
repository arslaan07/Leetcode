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
int helper(TreeNode* root, int sum) {
    // base case
       if(root == NULL) {
           return sum;
       } 
        
    // recursive case
    int rightSum = helper(root->right, sum);
    
    root->val += rightSum;
    
    return helper(root->left, root->val);
  
}
class Solution {
public:
    TreeNode* convertBST(TreeNode* root) {
        int sum = helper(root, 0);
        return root;
    }
};