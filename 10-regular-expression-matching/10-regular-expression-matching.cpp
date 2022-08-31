class Solution {
public:
    int dp[40][40];
    int solve(string &s,string &p,int i,int j)
    {
        if(j==p.size())return (i==s.size());
        if(dp[i][j]!=-1)return dp[i][j];
        
        int firstmatch = i<s.size() and ((s[i]==p[j]) or (p[j]=='.'));
        int ans = 0;
        
        if(j+1<p.size() and p[j+1]=='*')
        {
            ans = (firstmatch and solve(s,p,i+1,j)) or solve(s,p,i,j+2) ;
        }
        else
        {
            ans = (firstmatch and solve(s,p,i+1,j+1));
        }
        return dp[i][j] = ans;
    }
    
    bool isMatch(string s, string p) {
        
        memset(dp,-1,sizeof(dp));
        return solve(s,p,0,0);
        
        //tabulation solution
        int n = p.size();
        int m = s.size();
        
        int dp[n+1][m+1];
        for(int i = 0;i<n+1;i++)
        {
            for(int j = 0;j<m+1;j++)
            {
                if(i==0 and j==0)
                {
                    dp[i][j] = 1;
                }
                else if(i==0)
                {
                    dp[i][j] = 0;
                }
                else if(j==0)
                {
                    if(p[i-1]=='*')
                    {
                        dp[i][j] = dp[i-2][j];
                    }
                    else 
                        dp[i][j] = 0;
                }
                else
                {
                    if(s[j-1]==p[i-1] or p[i-1]=='.')
                        dp[i][j] = dp[i-1][j-1];
                    else if(p[i-1]=='*')
                    {
                        dp[i][j] = dp[i-2][j];
                        if(p[i-2]==s[j-1] or p[i-2]=='.')
                        {
                            dp[i][j] = (dp[i][j] or dp[i][j-1]);
                        }
                    }
                    else
                    {
                        dp[i][j] = 0;
                    }
                }
            }
        }
        return dp[n][m];
    }
};