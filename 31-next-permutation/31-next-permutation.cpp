class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int index1;
        int index2;
        int n = nums.size()-2;
        while(n>=0)
        {
            if(nums[n]<nums[n+1])
            {
                index1=n;
                break;
            }
            n--;
        }
        if(n<0)
        {
            reverse(nums.begin(),nums.end());
        }
        else
        {
            n=nums.size()-1;
            while(n>=0)
            {
                if(nums[n]>nums[index1])
                {
                    index2=n;
                    break;
                }
                n--;
            }
            swap(nums[index1],nums[index2]);
            reverse(nums.begin()+index1+1,nums.end());
        }
    }
};