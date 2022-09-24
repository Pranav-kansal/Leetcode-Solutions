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
    void helper(TreeNode* root,int &sum,int number)
    {
        if(root==NULL)
        {
            return;
        }
        number = number*10 + root->val;
        if(root->left == NULL  && root->right == NULL)
        {
            sum += number;
        }
        helper(root->left,sum,number);
        helper(root->right,sum,number);
        number = number/10;
        
    }
    int sumNumbers(TreeNode* root) {
        int sum =0;
        if(root==NULL)
        {
            return 0;
        }
        helper(root,sum,0);
        return sum;
    }
};