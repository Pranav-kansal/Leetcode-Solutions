class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> matrix (n, vector<int> (n));
        int rowBegin = 0;
        int rowEnd = n-1;
        int colBegin = 0;
        int colEnd = n-1;
        int k = 1;
        
         while(rowBegin<=rowEnd && colBegin<=colEnd) {
            
            for(int i = colBegin; i <= colEnd; i++) {
                matrix[rowBegin][i] = k;
                k++;
            }
            
            rowBegin++;
            
            for(int i = rowBegin; i <= rowEnd; i++) {
                matrix[i][colEnd] = k;
                k++;
            }
            
            colEnd--;
            
            if(rowBegin <= rowEnd) {
                for(int i = colEnd; i >= colBegin; i--) {
                    matrix[rowEnd][i] = k;
                    k++;
                }
            }
            
            rowEnd--;
            
            if(colBegin <= colEnd) {
                for (int i = rowEnd; i >= rowBegin; i--) {
                    matrix[i][colBegin] = k;
                    k++;
                }
            }
            
            colBegin++;
    
        }
        
        return matrix;
    }
};