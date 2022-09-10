class Solution {
public:
	int solve(int k,int i,int j,vector<int>& p,vector<vector<vector<int>>>& dp,int buy){
		if(i>=k||j>=p.size()){
			return 0;
		}
		if(dp[i][j][buy]!=-1)return dp[i][j][buy];
		if(buy==0){
			return dp[i][j][buy] = max(-p[j]+solve(k,i,j+1,p,dp,1),solve(k,i,j+1,p,dp,0));
		}
		else{
			return dp[i][j][buy] = max(p[j]+solve(k,i+1,j+1,p,dp,0),solve(k,i,j+1,p,dp,1));
		}
	}
	int maxProfit(vector<int>& prices) {
		int k=2;
		 vector<vector<vector<int>>> dp(k+1,vector<vector<int>>(prices.size()+1,vector<int>(2,-1)));
		return solve(k,0,0,prices,dp,0);
	}
};