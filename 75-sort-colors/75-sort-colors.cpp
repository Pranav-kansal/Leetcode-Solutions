class Solution {
public:
    void sortColors(vector<int>& nums) {
        int i=-1;
        int j= nums.size();
        int k=0;
        while(k<j)
        {
            if(nums[k]==0)
            {
                i++;
                swap(nums[i],nums[k]);
                k=i+1;
            }
            else if(nums[k]==2)
            {
                j--;
                swap(nums[k],nums[j]);
                k=i+1;
            }
            else
                k++;
        }
    }
};