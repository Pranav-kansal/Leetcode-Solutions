class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int left = 0, right = nums.size() - 1;
        
        while(left < right){
            int mid = left + (right - left) / 2;
            
            bool checkBounds = mid - 1 >= 0 && mid + 1 <= nums.size() - 1;
            if(checkBounds && nums[mid-1] < nums[mid] && nums[mid] > nums[mid+1])
                return mid;
            
            if(nums[mid] < nums[mid+1]) left = mid + 1;
            
            else right = mid;
        }
        
        return left;
    }
};