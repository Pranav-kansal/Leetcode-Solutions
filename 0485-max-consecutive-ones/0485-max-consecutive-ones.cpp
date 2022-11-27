class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count =0;
        int mx = INT_MIN;
        for(int i=0;i<nums.size();i++)
        {
            
            if(nums[i]==1)
            {
                count++;
            }
            else
            {   
                 mx = max(count,mx);
                count=0;
            }
        }
        mx = max(count,mx);
        return mx;
    }
};