class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>> res;
        
        if(nums.empty())
            return res;
        
        int n = nums.size();
        
        sort(nums.begin(),nums.end());
        
        
         
        for(int i=0; i<n; i++)
        {
            long long int target3 = target - nums[i];
            
            for(int j=i+1; j<n; j++)
            {
                long long int target2 = target3 - nums[j];
                
                int front = j+1;
                int back = n-1;
                
                while(front<back)
                {
                    
                    int two_sum = nums[front] + nums[back];
                    
                    if(two_sum < target2)
                        front++;
                    else if(two_sum > target2)
                        back--;
                    
                    else
                    {
                        
                        vector<int> quad(4,0);
                        quad[0] = nums[i];
                        quad[1] = nums[j];
                        quad[2] = nums[front];
                        quad[3] = nums[back];
                        
                        
                        res.push_back(quad);
                        
                        
                        while(front < back && nums[front] == quad[2]) 
                            front++;
                        
                        // Processing the duplicates of number 4
                        while(front < back && nums[back] == quad[3]) 
                            back--;
                    }
                    
                }
                // Processing the duplicates of number 2
                    while(j + 1 < n && nums[j + 1] == nums[j]) 
                        j++;
            }
            // Processing the duplicates of number 2
                    while(i + 1 < n && nums[i + 1] == nums[i]) 
                        i++;
        }
        
        return res;
    }
};