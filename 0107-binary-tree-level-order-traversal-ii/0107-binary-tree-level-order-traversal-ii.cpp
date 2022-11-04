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
    vector<vector<int>> bfs(TreeNode* root)
    {
        vector<vector<int>> res;
        
        queue<TreeNode*> q;
        q.push(root);
        int n;
        while(!q.empty())
        {
            n = q.size();
            vector<int> temp;
            for(int i=0;i<n;i++)
            {
                TreeNode* t = q.front();
                q.pop();
                temp.push_back(t->val);
                if(t->left)
                {
                    q.push(t->left);
                }
                if(t->right)
                {
                    q.push(t->right);
                }
            }
            res.push_back(temp);
        }
        reverse(res.begin(),res.end());
        return res;
        
    }
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        vector<vector<int>> res;
        if(root==NULL)
        {
            return res;
        }
        res =  bfs(root);
        return res;
    }
};