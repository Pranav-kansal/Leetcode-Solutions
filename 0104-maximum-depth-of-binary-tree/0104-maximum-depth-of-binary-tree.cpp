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
            if(count>depth)
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
    int maxDepth(TreeNode* root) {
        if(root==NULL)
        {
            return 0;
        }
        int count =0;
       helper(root,0,count);
        return count+1;
    }
};