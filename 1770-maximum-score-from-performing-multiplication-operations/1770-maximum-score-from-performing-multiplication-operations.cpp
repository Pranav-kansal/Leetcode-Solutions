class Solution {
public:
    int memo[1001][1001];
    int rec(vector<int> &nums, int start, vector<int> &multipliers, int index){
        if(index == multipliers.size()) return 0;
        
        if(memo[start][index] != INT_MAX) return memo[start][index];
        
        int end = nums.size() - (index - start) - 1;
        
        int pickFirst = rec(nums, start+1, multipliers, index+1) + nums[start] * multipliers[index];
        int pickLast = rec(nums, start, multipliers, index+1) + nums[end] * multipliers[index];
        
        return memo[start][index] = max(pickFirst, pickLast);
    }
    int maximumScore(vector<int>& nums, vector<int>& multipliers) {
		// Initalizing the memo : with INT_MAX
        for(int i = 0; i < 1001; i++) for(int j = 0; j < 1001; j++) memo[i][j] = INT_MAX;
        return rec(nums, 0, multipliers, 0);
    }
};