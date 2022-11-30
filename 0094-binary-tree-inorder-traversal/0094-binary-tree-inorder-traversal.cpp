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
    void inorder(TreeNode* root,vector<int>& ans)
    {
        TreeNode* cur = root;  
        while(cur!=NULL)
        {
            if(cur->left == NULL)
            {
                ans.push_back(cur->val);
                cur = cur->right; 
            }
            else 
            {
                TreeNode* temp = cur->left; 
                while(temp->right != NULL && temp->right != cur)
                {
                    temp = temp->right; 
                }
                if(temp->right == NULL)
                {
                    temp->right = cur; 
                    cur = cur->left;
                }
                else
                {
                    ans.push_back(cur->val);
                    temp->right = NULL; 
                    cur = cur->right; 
                }
            }
        }

    }
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> res;
        inorder(root,res);
        return res;
    }
};