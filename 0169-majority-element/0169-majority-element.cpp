class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int> mp;
        for(int i=0;i<nums.size();i++)
        {
            mp[nums[i]]++;
        }
        int mid = nums.size()/2;
        for(auto it : mp)
        {
            if(it.second>mid)
            {
                return it.first;
            }
        }
        return nums[mid];
    }
};