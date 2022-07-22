class Solution {
public:
    int findShortestSubArray(vector<int>& nums) {
        unordered_map<int,int> count,start,end;
        for(int i=0;i<nums.size();i++)
        {
            if(start.find(nums[i])== start.end())
            {
                start[nums[i]]=i;
                end[nums[i]]=i;
                count[nums[i]]++;
            }
            else
            {
                end[nums[i]]=i;
                count[nums[i]]++;
            }
        }
        int degree=0,size=INT_MAX;
        for(auto &it : count)
        {
            degree = max(degree,it.second);
        }
        for(auto &it : count)
        {
            if(it.second == degree)
            {
                size = min(size,end[it.first] - start[it.first]  +1);
            }
        }
        return size;
    }
};