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
    TreeNode* searchBST(TreeNode* root, int val) {
        if (root==NULL)return NULL;
        while (root->val != val){
            if (val< root->val)
            {
                if (root->left)
                   root= root->left; 
             else 
                   break;
            }
            else if (val > root->val)
            { 
                if (root->right)
                   root= root->right; 
               else 
                   break; 
            }
        }
        if (root->val == val)return root;
        return NULL;
    }
};