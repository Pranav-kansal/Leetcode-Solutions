class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int i=-1;
        int j=0;
        while(j<nums.size())
        {
            if(nums[j]%2==0)
            {
                i++;
                swap(nums[i],nums[j]);
            }
            j++;
        }
        return nums;
    }
};