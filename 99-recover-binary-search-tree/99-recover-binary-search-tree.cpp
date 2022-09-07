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
   void print(TreeNode* root,vector<int>& temp){
    if(root==nullptr)
        return;
    print(root->left,temp);
    temp.push_back(root->val);
    print(root->right,temp);
}
void recover(TreeNode* &root,vector<int>& temp,int &n){
    if(root==nullptr)
        return;
    recover(root->left,temp,n);
    root->val=temp[n];
    n++;
    recover(root->right,temp,n);
}
void recoverTree(TreeNode* root) {
    vector<int> temp;
    print(root,temp);
    sort(temp.begin(),temp.end());
    int n=0;
    recover(root,temp,n);
}
};