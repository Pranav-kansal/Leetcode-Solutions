class Solution {
public:
    bool isSafe(vector<vector<char>>& board,int row,int column,char temp)
    {
        for(int i=0;i<9;i++)
        {
            if(board[row][i]==temp)
                return false;
            if(board[i][column]==temp)
                return false;
            if(board[3*(row/3)+i/3][3*(column/3)+i%3]==temp)
                return false;
        }
        return true;
    }
    bool isValidSudoku(vector<vector<char>>& board) {
        char temp;
       for(int i=0;i<board.size();i++)
       {
           for(int j=0;j<board[0].size();j++)
           {
               if(board[i][j]!='.')
               {
                   temp = board[i][j];
                  board[i][j]='#';
                   if(isSafe(board,i,j,temp)==false)
                   {
                       return false;
                   }
                   board[i][j]=temp;
               }
           }
       }
        return true;
    }
};