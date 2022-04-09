class Solution {
public:
   vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<pair<int,int>> arr;
        vector<int> ans;
        int freq = 1;
        
        sort (nums.begin(), nums.end()); 
        for (int i=0; i<nums.size()-1; i++) {
            if(nums[i]==nums[i+1]){  
                freq++;
            }
            else { 
                arr.push_back({freq,nums[i]}); 
                freq = 1; 
            }
        }
        arr.push_back( {freq, nums[nums.size()-1]} );
        
        sort (arr.rbegin(), arr.rend());
        
        for (int i=0; i<k; i++) {
            ans.push_back(arr[i].second);
        }
        return ans;
    }
};