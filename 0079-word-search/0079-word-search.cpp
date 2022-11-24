class Solution {
public:
    bool calculate(int ind,int i,int j,int size,string word,vector<vector<char>>& board,int m,int n){    //Dont forget to give '&' in front of board as here without it the solution will throw TLE
    if(ind==size)
        return true;
    
    if(i==m || i==-1 || j==-1 || j==n)
        return false;
    
    if(board[i][j]==word[ind]){
        char ch= board[i][j];
        board[i][j]='*';
        if((calculate(ind+1,i-1,j,size,word,board,m,n) || calculate(ind+1,i+1,j,size,word,board,m,n) || calculate(ind+1,i,j-1,size,word,board,m,n) || calculate(ind+1,i,j+1,size,word,board,m,n)))
            return true;
        board[i][j]=ch;
    } 
    return false;
}

bool exist(vector<vector<char>>& board, string word) {
    int size=word.size(),m=board.size(),n=board[0].size();
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(calculate(0,i,j,size,word,board,m,n))
                return true;
        }
    }
    return false;
}
};