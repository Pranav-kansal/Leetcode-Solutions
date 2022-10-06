class Solution {
public:
    bool isInterleave(string s1, string s2, string s3) {
    vector<vector<int>> dp(s1.size()+1,vector<int>(s2.size()+1,-1));
        if(s1.size()+s2.size()!=s3.size())return false;
    return solve(0,0,s1,s2,s3,dp)==1;
    }
    int solve(int i1,int i2,string s1,string s2,string s3,vector<vector<int>>& dp){
        if(dp[i1][i2]!=-1)return dp[i1][i2];
        if(i1==s1.size() and i2==s2.size()){
            return 1;
        }
        if(s1[i1]!=s3[i1+i2] and s2[i2]!=s3[i1+i2])return 0;
        int ans=0;
        if(s1[i1]==s3[i1+i2] and s2[i2]==s3[i1+i2]){
           ans|= solve(i1+1,i2,s1,s2,s3,dp);
           ans|= solve(i1,i2+1,s1,s2,s3,dp);
        }
        else if(s1[i1]==s3[i1+i2]){
         ans|= solve(i1+1,i2,s1,s2,s3,dp);
        }
        else if(s2[i2]==s3[i1+i2]){
         ans|= solve(i1,i2+1,s1,s2,s3,dp);
        }
        return  dp[i1][i2]=ans;
    }
};