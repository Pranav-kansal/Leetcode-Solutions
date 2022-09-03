class Solution {
public:
    void helper(vector<int>& nums,vector<vector<int>>& res,vector<int> temp,int index)
    {
        if(find(res.begin(),res.end(),temp)==res.end())
        {
            res.push_back(temp);
        }
        for(int i=index;i<nums.size();i++)
        {
            temp.push_back(nums[i]);
            helper(nums,res,temp,i+1);
            temp.pop_back();
        }
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<int> temp;
        vector<vector<int>> res;
        helper(nums,res,temp,0);
        return res;
    }
};