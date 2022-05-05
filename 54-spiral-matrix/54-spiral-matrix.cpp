class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        
        vector <int> res;
        
        int row = matrix.size();
        int col = matrix[0].size();
        
        int count = 0;
        int total = row*col;
        
        //index intalizartion
        int start_row = 0;
        int start_col = 0;
        int end_row = row - 1;
        int end_col = col - 1;
        while(count<total)
        {
            //print starting r0w
            for(int i = start_col;count<total && i<=end_col;i++)
            {
                res.push_back(matrix[start_row][i]);
                count++;
            }
            start_row++;
            
            //print end col;
            
            for(int i = start_row;count<total && i<=end_row;i++)
            {
                res.push_back(matrix[i][end_col]);
                count++;
            }
            end_col--;
            
            //print end row
            
            for(int i = end_col;count<total && i>=start_col;i--)
            {
                res.push_back(matrix[end_row][i]);
                count++;
            }
            end_row--;
            
            //print start col in bottom up direction
            
            for(int i = end_row;count<total && i>=start_row;i--)
            {
                res.push_back(matrix[i][start_col]);
                count++;
            }
            start_col++;
        }
        
        
        
        return res;
        
        
    }
};