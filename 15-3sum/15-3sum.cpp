class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> res;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++)
        {
            int lo = i+1,hi = nums.size()-1;
            if(i!=0 && nums[i]==nums[i-1])
                continue;
            while(lo<hi)
            {
                int curr  = nums[i] + nums[lo] + nums[hi];
                if(curr == 0)
                {
                    res.push_back({nums[i],nums[lo],nums[hi]});
                    lo++;
                    hi--;
                    
                }
                else if(curr<0)
                {
                    lo++;
                }
                else
                    hi--;
            }
        }
        res.erase(unique(res.begin(),res.end()),res.end());
        return res;
    }
};