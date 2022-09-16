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
    bool solve(TreeNode* left, TreeNode* right){
        if(!left || !right){
            return left == right;
        }
        if(left->val != right->val){
            return false;
        }
        bool l = solve(left->left, right->right);
        bool r = solve(left->right, right->left);
        return l&&r;
    }
    
    bool isSymmetric(TreeNode* root) {
        
        return solve(root->left, root->right);
        
    }
};