class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        unordered_map<int,int> mp;
        vector<int> res;
        for(int i=0;i<nums.size();i++)
        {
            mp[nums[i]]++;
        }
        int maj = INT_MIN;
        int ans =-1;
        for(auto it : mp)
        {
            if(it.second>maj && it.first%2==0)
            {
                maj = it.second;
                ans = it.first;
            }
            else if(it.second==maj && it.first%2==0)
            {
                ans = min(it.first,ans);
            }
        }
        return ans;
    }
};