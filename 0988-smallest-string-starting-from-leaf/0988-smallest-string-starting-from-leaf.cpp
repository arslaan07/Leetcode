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
    string smallestFromLeaf(TreeNode* root) {
        string smallestString = "";
        queue<pair<TreeNode*, string>> q;
        
        q.push({root, string(1, root->val+'a')});
        
        while(!q.empty()) {
            auto[node, curStr] = q.front();
            q.pop();
            
            if(node->left == NULL && node->right == NULL) {
                if(smallestString == "") {
                    smallestString = curStr;
                }
                else {
                    smallestString = min(smallestString, curStr);
                }
            }
            if(node->left != NULL) {
                q.push({node->left, char(node->left->val+'a') + curStr});
            }
            if(node->right != NULL) {
                q.push({node->right, char(node->right->val+'a') + curStr});
            }
    }
        return smallestString;
    }
};