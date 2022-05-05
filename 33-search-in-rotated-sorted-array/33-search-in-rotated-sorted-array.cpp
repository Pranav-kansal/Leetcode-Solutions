class Solution {
public:
    
    int search(vector<int>& nums, int target) {
        int lo = 0;
        int hi = nums.size() - 1;
        while(lo<hi)
        {
            int mid = lo+(hi-lo)/2;
            if(nums[mid]>nums[hi])
                lo = mid+1;
            else
                hi = mid;
        }
        //We have divided the array into two parts
        int p = lo;
        hi = nums.size()-1;
        if(target>nums[hi])
        {
            lo = 0;
            hi = p-1;
        }
        else{
            lo = p;
            hi = nums.size()-1;
        }
        
        
        while(lo<=hi)
        {
            int mid = lo+(hi-lo)/2;
            
            if(nums[mid]==target)
                return mid;
            else if(nums[mid]<target)
            {
                lo = mid+1;
            }
            else{
                hi = mid-1;
            }
        }
        
        return -1;
    }
};