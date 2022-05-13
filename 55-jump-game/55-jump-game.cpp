class Solution {
public:
    int canJump(vector<int>& nums) {
        int currMax = 0;
        if(nums.size()==1)return true;
        for(int i=0;i<nums.size()-1 && currMax>=i;i++)
        {
            if(i + nums[i]>currMax)
            {
                currMax = i + nums[i];
            }
            
        }
        if(currMax >= nums.size()-1)
                return true;
        return false;
    }
};