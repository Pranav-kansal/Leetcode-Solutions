class Solution {
public:
    void dfs(vector<vector<int>>& image, int i, int j,int initialColor,int newColor)
    {
        if(i<0 || j<0)return;
        if(i>=image.size() || j>=image[0].size())return;
        if(image[i][j]!=initialColor)return;
        
        image[i][j] = newColor;
        
        dfs(image,i+1,j,initialColor,newColor);
         dfs(image,i,j+1,initialColor,newColor);
         dfs(image,i-1,j,initialColor,newColor);
         dfs(image,i,j-1,initialColor,newColor);
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        int initialColor = image[sr][sc];
        if(initialColor!=newColor)
            dfs(image,sr,sc,initialColor,newColor);
        return image;
    }
};