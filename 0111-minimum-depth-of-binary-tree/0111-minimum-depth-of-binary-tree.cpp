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
    void helper(TreeNode* root,int count,int &depth)
    {
        if(root->left==NULL && root->right==NULL)
        {
            if(count<depth)
            {
                depth = count;
            }
            return;
        }
        if(root->left!=NULL)
        {
            helper(root->left,count+1,depth);
        }
                
        if(root->right!=NULL)
        {
            helper(root->right,count+1,depth);
        }
    }
    int minDepth(TreeNode* root) {
        if(root==NULL)
        {
            return 0;
        }
        int depth =INT_MAX;
        helper(root,0,depth);
        return depth+1;
    }
};