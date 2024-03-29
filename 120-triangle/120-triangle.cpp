class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangles) {
        int n = triangles.size();
        vector<vector<int>> dp(n,vector<int>(n,0));
        dp[0][0]=triangles[0][0];
        for(int i=1;i<n;i++)
        {
            for(int j=0;j<triangles[i].size();j++)
            {
                if(j==0)
                {
                    dp[i][j] = triangles[i][j] + dp[i-1][j];
                }
                else if(j>=i)
                {
                    dp[i][j] = triangles[i][j] + dp[i-1][j-1];
                }
                else
                {
                    dp[i][j] = triangles[i][j] + min(dp[i-1][j],dp[i-1][j-1]);
                }
            }
        }
        return *min_element(dp[n-1].begin(),dp[n-1].end());
    }
};