class Solution {
public:
    vector<int> sortEvenOdd(vector<int>& nums) {
        for(int i=0;i<nums.size()/2;i+=1)
            for(int j=1;j<nums.size()-i-2;j+=2)
            {
                if(nums[j]<nums[j+2])
                {
                        swap(nums[j],nums[j+2]);
                }
            }
        for(int i=0;i<nums.size()/2;i+=1)
            for(int j=0;j<nums.size()-i-2;j+=2)
            {
                if(nums[j]>nums[j+2])
                {
                        swap(nums[j],nums[j+2]);
                }
            }
        return nums;
    }
};