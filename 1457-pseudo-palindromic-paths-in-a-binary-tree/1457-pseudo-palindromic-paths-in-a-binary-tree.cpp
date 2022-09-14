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
    int isPalindrome(vector<int>&arr){
        int n=arr.size();
        int sum=0;
        int one=0,zero=0;
        for(int i=0;i<n;i++){
            if(arr[i]%2){
                one++;
            }
            else{
                zero++;
            }
            sum+=arr[i];
        }
        if(sum%2==0){
            return one==0;
        }
        return one==1;
    }
    int helper(TreeNode* root,vector<int> temp)
    {
        if(root->left==NULL && root->right==NULL)
        {
            temp[root->val]++;
            int ans = isPalindrome(temp);
            return ans;
        }
       
       int val=0;
        temp[root->val]++;
        if(root->left)
        {
            val += helper(root->left,temp);
        }
        if(root->right)
        {
            val += helper(root->right,temp);
        }
        return val;
    }
    int pseudoPalindromicPaths (TreeNode* root) {
        if(!root->left && !root->right)
        {
            return 1;
        }
        vector<int> temp(10,0);
        int ans = helper(root,temp);
        return ans;
    }
};