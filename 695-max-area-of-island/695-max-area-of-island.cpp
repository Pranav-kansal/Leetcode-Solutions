class Solution {
public:
    void dfs(vector<vector<int>>& grid,int& count,int i,int j)
    {
        if(i<0 || j<0)return;
        if(i>=grid.size() || j>=grid[0].size())return;
        if(grid[i][j]==0)return;
        count++;
        grid[i][j]=0;
        dfs(grid,count,i+1,j);
        dfs(grid,count,i,j+1);
        dfs(grid,count,i-1,j);
        dfs(grid,count,i,j-1);
    }
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int maxi =0;
        int count =0;
        for(int i=0;i<grid.size();i++)
        {
            for(int j=0;j<grid[0].size();j++)
            {
                if(grid[i][j]==1)
                {
                    count =0;
                    dfs(grid,count,i,j);
                    cout<<count<<" ";
                    maxi = max(count,maxi);
                }
            }
        }
        return maxi;
    }
};