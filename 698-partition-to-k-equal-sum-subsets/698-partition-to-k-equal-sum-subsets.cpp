class Solution {
public:
    bool canPartition(vector<int>& nums,vector<bool> visited,int start,int k,int curSum,int subsetsum)
    {
        if(k==0)return true;
        if(curSum>subsetsum) return false;
        if(curSum == subsetsum)
        {
            return canPartition(nums,visited,0,k-1,0,subsetsum);
        }
        for(int i=start;i<nums.size();i++)
        {
            if(visited[i])continue;
            visited[i] = true;
            if(canPartition(nums,visited,i+1,k,curSum+nums[i],subsetsum))return true;
            visited[i]=false;
            if(curSum == 0)break;
        }
        return false;
    }
    bool canPartitionKSubsets(vector<int>& nums, int k) {
        int sum =0;
        for(int i=0;i<nums.size();i++)
        {
            sum += nums[i];
        }
        if(sum%k!=0)
        {
            return false;
        }
        if(nums.size()<k)return false;
        int subsetsum = sum/k;
        vector<bool> visited(nums.size(),false);
        return canPartition(nums,visited,0,k,0,subsetsum);
    }
};