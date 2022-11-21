class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int,int> mp;
        vector<int> res;
        for(int i=0;i<nums.size();i++)
        {
            mp[nums[i]]++;
        }
        int mid = nums.size()/3;
        for(auto it : mp)
        {
            if(it.second>mid)
            {
                res.push_back(it.first);
            }
        }
        return res;
    }
};