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
    int sum = 0;
    void helper(TreeNode* root, string str) {
        // base case
        if(root == NULL) return;
        if(root->left == NULL && root->right == NULL){
            sum += stoi(str + to_string(root->val));
            cout << "str : " << str << endl;
            cout << sum << endl;
            return;
        }  
        // recursive case
        helper(root->left, str + to_string(root->val));
        helper(root->right, str + to_string(root->val));
        
    }
    int sumNumbers(TreeNode* root) {
        helper(root, "");
        return sum;
    }
};