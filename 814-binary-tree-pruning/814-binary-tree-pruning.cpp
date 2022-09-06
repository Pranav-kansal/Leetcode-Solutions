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
    void helper(TreeNode* root,int &count)
    {
        if(root==NULL)
        {
            return;
        }
        int countl=0;
        int countr=0;
        helper(root->left,countl);
        if(countl==0)
        {
            root->left=NULL;
        }
        helper(root->right,countr);
        if(countr==0)
        {
            root->right=NULL;
        }
        count = countl + countr;
        if(root->val==1)
        {
            count+=1;;
        }
        
    }
    TreeNode* pruneTree(TreeNode* root) {
        int count=0;
        helper(root,count);
        if(count==0)return NULL;
        return root;
    }
};