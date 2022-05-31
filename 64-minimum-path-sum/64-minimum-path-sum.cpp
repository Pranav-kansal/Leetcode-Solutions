class Solution
{
public:

int fun(int i, int j, vector<vector<int>> &mat, vector<vector<int>> &dp)
{
    if (i == 0 and j == 0)
        return dp[0][0] = mat[0][0];
    
    if (dp[i][j] != -1)
        return dp[i][j];
    
    int cnt1 = INT_MAX, cnt2 = INT_MAX;
    
    if (j - 1 >= 0 )
        cnt1 = min(INT_MAX, fun(i, j - 1, mat, dp));

    if (i - 1 >= 0 )
        cnt2 = min(INT_MAX, fun(i - 1, j, mat, dp));

    return dp[i][j] = mat[i][j] + min(cnt1, cnt2);
}

int minPathSum(vector<vector<int>> &grid)
{
    int n = grid.size();
    int m = grid[0].size();
    
    vector<vector<int> > dp(n, vector<int> (m, -1));
    int x = fun(n-1, m-1, grid, dp);
    
    return x;
}
};