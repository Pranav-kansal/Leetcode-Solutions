class Solution {
public:
    
    bool f(int i, int j, string &s, vector<string>&wordDict, int n, map<string, bool> &m, vector<vector<int>>&dp) {
        if(i>=n && j>=n) return 1;
        if(j>=n) return 0;
        
        if(dp[i][j] != -1) return dp[i][j];
        
        bool a=0, b=0;
        string str = s.substr(i, j-i+1);
        if(m.find(str)!=m.end()) a = f(j+1, j+1, s, wordDict, n, m, dp);
        b = f(i, j+1, s, wordDict, n, m, dp);
        return dp[i][j] = a | b;
    }
    
    bool wordBreak(string s, vector<string>& wordDict) {
        int n = s.size();
        map <string, bool> m;
        for(int i=0; i<wordDict.size(); i++) m[wordDict[i]]=1;
        
        vector<vector<int>>dp(n+1, vector<int>(n+1, -1));
        return f(0, 0, s, wordDict, n, m, dp);
    }
};