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
    void maxheight(TreeNode* root,int h,int &maxHeight)
    {
        if(root == NULL)
        {
            return;
        }
        if(root->left == NULL && root->right == NULL)
        {
            maxHeight = max(maxHeight,h);
            return;
        }
        else
        {
            h++;
        }
        maxheight(root->left,h,maxHeight);
        maxheight(root->right,h,maxHeight);  
    }
    void Sum(TreeNode *root,int h,int maxHeight,int &sum)
    {
        if(root == NULL)
        {
            return;
        }
        if(root->left == NULL && root->right == NULL)
        {
            if(h == maxHeight)
            {
                sum += root->val;
            }
            return;
        }
        else 
            h++;
        Sum(root->left,h,maxHeight,sum);
        Sum(root->right,h,maxHeight,sum);
    }
            
        int deepestLeavesSum(TreeNode* root) {
            int height = INT_MIN;
            int sum = 0;
            maxheight(root,0,height);
            Sum(root,0,height,sum);
            return sum;
    }
};