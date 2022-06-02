class Solution {
public:
    int findMin(vector<int>& nums) {
        int start =0;
        int end = nums.size()-1;
        int mid;
        int pivot;
        while(start <= end)
        {
            mid = start + (end - start)/2;
            if(mid != nums.size()-1 && nums[mid]>nums[mid+1])
                break;
            else if(nums[mid]>=nums[0])
            {
                start = mid +1;
            }
            else
                end = mid -1;
            
        }
        if(mid == nums.size()-1)
            return nums[0];
        else
            return nums[mid+1];
    }
};