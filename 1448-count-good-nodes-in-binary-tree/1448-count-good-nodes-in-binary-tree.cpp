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
    void helper(TreeNode* root,int& count,int mx)
    {
        if(root == NULL)
        {
            return;
        }
        if(root->val>=mx)
        {
            count+=1;
            mx = max(mx,root->val);
        }
        helper(root->left,count,mx);
        helper(root->right,count,mx);
    }
    int goodNodes(TreeNode* root) {
        int count =0;
        helper(root,count,INT_MIN);
        return count;
    }
};