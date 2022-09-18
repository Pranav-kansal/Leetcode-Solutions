class Solution {
public:
    vector<int> dp;
    int helper(int n)
    {
       if(n==0)
        {
            return 1;
        }
        if(dp[n]!=-1)return dp[n];
        int res=0;
        for(int i=0;i<n;i++)
        {
            res += helper(i)*helper(n-i-1);
            
        }
        return dp[n] = res; 
    }
    int numTrees(int n) {
        dp.resize(n+1,-1);
        return helper(n);
    }
};