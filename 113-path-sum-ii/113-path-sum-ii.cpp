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
    void helper(TreeNode* root,int targetSum,vector<int>& temp,vector<vector<int>>& res,int sum)
    {
        if(root==NULL)
        {
            return;
        }
        temp.push_back(root->val);
        sum += root->val;
        if(root->left==NULL && root->right==NULL && sum == targetSum)
        {
            res.push_back(temp);
        }
        helper(root->left,targetSum,temp,res,sum);
        helper(root->right,targetSum,temp,res,sum);
        sum -=root->val;
        temp.pop_back();
    }
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<int> temp;
        vector<vector<int>> res;
        helper(root,targetSum,temp,res,0);
        return res;
    }
};