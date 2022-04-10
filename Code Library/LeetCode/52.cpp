class Solution {
public:
    int totalNQueens(int n) {
        vector<int> leftRow(n,0),upperDia(2*n - 1,0),lowerDia(2*n - 1,0);
        
        return hero(0,leftRow,upperDia,lowerDia,n);
    }
    
private:
    int hero(int col,vector<int> &leftRow,vector<int> &upperDia,vector<int> &lowerDia,int n){
        if(col==n){
            return 1;
        }
        int count=0;
        for(int row=0;row<n;row++){
            if(leftRow[row]==0 and upperDia[n-1+col-row]==0 and lowerDia[row+col]==0){
                leftRow[row]=upperDia[n-1+col-row]=lowerDia[row+col]=1;
                count+=hero(col+1,leftRow,upperDia,lowerDia,n);
                leftRow[row]=upperDia[n-1+col-row]=lowerDia[row+col]=0;
            }
        }
        return count;
    }
};