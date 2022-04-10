class Solution {
    void hero(int col,vector<vector<string>> &ans,vector<string> &board,vector<int> upperDia,vector<int> leftRow,vector<int> lowerDia,int n){
        if(col==n){
            ans.push_back(board);
            return;
        }
        for(int row=0;row<n;row++){
            if(lowerDia[row+col]==0 and leftRow[row]==0 and upperDia[n-1+col-row]==0){
                upperDia[n-1+col-row]=1;
                leftRow[row]=1;
                lowerDia[row+col]=1;
                board[row][col]='Q';
                hero(col+1,ans,board,upperDia,leftRow,lowerDia,n);
                upperDia[n-1+col-row]=0;
                leftRow[row]=0;
                lowerDia[row+col]=0;
                board[row][col]='.';
            }
        }
        return;
    }
public:
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>> ans;
        vector<string> board(n);
        string s(n,'.');
        for(int i=0;i<n;i++){
            board[i]=s;
        }
        vector<int> upperDia(2*n - 1,0),leftrow(n,0),lowerDia(2*n - 1,0);
        hero(0,ans,board,upperDia,leftrow,lowerDia,n);
        return ans;
        
    }
};