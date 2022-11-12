class Solution {
private:
    int dp[201][201];
	int f(int s, int e) {
		if (s >= e) return 0;
        
        if(dp[s][e] != -1) return dp[s][e];
		int res = INT_MAX;
		for (int i = s; i <= e; ++i) {
			int ans = i + max(f(s, i - 1), f(i + 1, e));
			res = min(res, ans);
		}
		return dp[s][e] = res;
	}
public:
	int getMoneyAmount(int n) {
        memset(dp, -1, sizeof(dp));
		return f(1, n);
	}
};