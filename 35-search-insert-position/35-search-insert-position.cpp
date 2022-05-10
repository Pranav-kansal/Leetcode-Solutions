class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int lb=0;
        int ub =nums.size()-1;
        int mid;
        if(target<nums[0])return 0;
        if(target>nums[nums.size()-1])return nums.size();
        int index;
        while(lb<=ub)
        {
            mid = lb+(ub - lb)/2;
            if(nums[mid] == target)
            {
                index = mid;
                break;
            }
            else if(mid!=nums.size()-1 && target>nums[mid] && target<nums[mid+1])
            {
                index =  mid+1;
                break;
            }
            else if(nums[mid]>target)
                ub = mid-1;
            else
                lb = mid +1;
        }
     return index;   
    }
};