class Solution {
public:
    void helper(vector<int>& nums,int start,int end)
    {
        while(start<end)
        {
            swap(nums[start],nums[end]);
            start++;
            end--;
        }
    }
    void rotate(vector<int>& nums, int k) {
        int n  = nums.size();
       if(k<0)
       {
           k = k + nums.size();
       }
        k=k%nums.size();
        helper(nums,0,n-k-1);
        helper(nums,n-k,n-1);
        helper(nums,0,n-1);
    }
};