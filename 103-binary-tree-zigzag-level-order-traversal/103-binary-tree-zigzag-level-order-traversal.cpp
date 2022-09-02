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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> res;
        if(root==NULL)
            return res;
        
        queue<TreeNode*> q;
        q.push(root);
        res.push_back({root->val});
        int level=0;
        while(!q.empty())
        {
            
            vector<int> temp;
            int size = q.size();
            for(int i=0;i<size;i++)
            {
                
                TreeNode* t = q.front();
                q.pop();
                if(t->left)
                {
                    q.push(t->left);
                    temp.push_back(t->left->val);
                }
                if(t->right)
                {
                    q.push(t->right);
                    temp.push_back(t->right->val);
                }
                
            }
            if(level%2==0)
            {
                reverse(temp.begin(),temp.end());
            }
            if(!temp.empty())
            res.push_back(temp);
            level++;
        }
        return res;
    }
};