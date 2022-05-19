class Solution {
public:
    int recursion(vector<vector<int>>& matrix,int i,int j,vector<vector<int>>& memo)
    {
        if(i<0 || j<0 || i>=matrix.size() || j>=matrix[0].size())return 0;
        if(memo[i][j]>0)return memo[i][j];
        int currentMax = 1;
        if(i+1<matrix.size() && matrix[i][j]<matrix[i+1][j])
        {
            currentMax = max(currentMax,1 + recursion(matrix,i+1,j,memo));
        }
        if(j+1<matrix[0].size() && matrix[i][j]<matrix[i][j +1])
        {
            currentMax = max(currentMax,1 + recursion(matrix,i,j+1,memo));
        }
        if(i-1>=0 && matrix[i][j]<matrix[i-1][j])
        {
            currentMax = max(currentMax,1 + recursion(matrix,i-1,j,memo));
        }
        if(j-1>=0 && matrix[i][j]<matrix[i][j-1])
        {
            currentMax = max(currentMax,1 + recursion(matrix,i,j-1,memo));
        }
        memo[i][j]=currentMax;
        return currentMax;
    }
    int longestIncreasingPath(vector<vector<int>>& matrix) {
        vector<vector<int>> memo(matrix.size(),vector<int> (matrix[0].size(),0));
        int Max =0;
        for(int i=0;i<matrix.size();i++)
        {
            for(int j=0;j<matrix[0].size();j++)
            {
                Max = max(Max,recursion(matrix,i,j,memo));
            }
        }
        return Max;
    }
};