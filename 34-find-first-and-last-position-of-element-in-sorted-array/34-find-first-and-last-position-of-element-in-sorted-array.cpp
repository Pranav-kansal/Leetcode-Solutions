class Solution {
public:
        
   int lower_bound(vector <int> &nums, int target)
   {
           int start = 0;
           int end = nums.size() - 1;
           int ans = -1;
           
           while(start <= end)
           {
                   int mid = (start + end)/2;
                   
                   if(nums[mid] == target)
                   {
                           ans = mid;
                           end = mid-1;
                   }
                   else if(nums[mid] > target)
                   {
                           end = mid-1;
                   }
                   else
                   {
                           start = mid + 1;
                   }
           }
           
           return ans;
   }
        
      int upper_bound(vector <int> &nums, int target)
   {
           int start = 0;
           int end = nums.size() - 1;
           int ans = -1;
           
           while(start <= end)
           {
                   int mid = (start + end)/2;
                   
                   if(nums[mid] == target)
                   {
                           ans = mid;
                           start = mid + 1;
                   }
                   else if(nums[mid] > target)
                   {
                           end = mid-1;
                   }
                   else
                   {
                           start = mid + 1;
                   }
           }
           
           return ans;
   }
    vector<int> searchRange(vector<int>& nums, int target) 
    {
        
            if(nums.size() == 0)
            {
                    return {-1,-1};
            }
            
            int lower_boundIndex = lower_bound(nums, target);
            int upper_boundIndex = upper_bound(nums,target);
            
            return {lower_boundIndex, upper_boundIndex};
    }
};