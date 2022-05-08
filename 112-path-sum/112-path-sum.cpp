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
    void recurssion(TreeNode*root,int target,int sum,int &f)
    {
        if(root == NULL)return;
        sum += root->val;
        
        recurssion(root->left,target,sum,f);
        recurssion(root->right,target,sum,f);
        if(root->left == NULL && root->right==NULL)
        {
            if(sum == target)
            {
                f=1;
            }
            return;
        }
    }
public:
    bool hasPathSum(TreeNode* root, int targetSum) {
        if(root==NULL)return false;
        int f=0;
        recurssion(root,targetSum,0,f);
        if(f==1)
        {
            return true;
        }
        else
            return false;
    }
};