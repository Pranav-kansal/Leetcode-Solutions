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
    void dfs(vector<string> &res, TreeNode *root, string cur)
    {
        if(!root->left && !root->right) res.push_back(cur  + std::to_string(root->val));
        else
        {
            if(root->left) dfs(res, root->left,  cur  + std::to_string(root->val)+"->");
            if(root->right) dfs(res, root->right, cur  + std::to_string(root->val)+"->");
        }
    }
public:
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> res;
        if(root)  dfs(res, root, "");
        return res;
    }
};