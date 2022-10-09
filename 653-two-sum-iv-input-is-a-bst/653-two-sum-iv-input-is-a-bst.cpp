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
    void helper(TreeNode*root,vector<int> &values)
    {
        if(root==NULL)
        {
            return;
        }
        helper(root->left,values);
        values.push_back(root->val);
        helper(root->right,values);
    }
    bool findTarget(TreeNode* root, int k) {
        vector<int> values;
        helper(root,values);
        int i=0;
        int j=values.size()-1;
        for(int l=0;l<values.size()-1;l++)
        {
            cout<<values[l]<<" ";
        }
        while(i<j)
        {
            if(values[i]+values[j]==k)
            {
                return true;
            }
            if(values[i]+values[j]>k)
            {
                j--;
            }
            else
                i++;
        }
        return false;
    }
};