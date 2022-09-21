class Solution {
public:
    vector<int> sumEvenAfterQueries(vector<int>& nums, vector<vector<int>>& queries) {
        vector<int> ans;
        int oddsum =0;
        int evensum=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]%2==0)
            {
                evensum += nums[i];
            }
            else
            {
                oddsum += nums[i];
            }
        }
        for(int i=0;i<queries.size();i++)
        {
            if(nums[queries[i][1]]%2==0)
            {
                evensum-=nums[queries[i][1]];
            }
            else
            {
                oddsum-=nums[queries[i][1]];
            }
            nums[queries[i][1]]+=queries[i][0];
            if(nums[queries[i][1]]%2==0)
            {
                evensum+=nums[queries[i][1]];
            }
            else
            {
                oddsum+=nums[queries[i][1]];
            }
            ans.push_back(evensum);
        }
      return ans;      
    }
};