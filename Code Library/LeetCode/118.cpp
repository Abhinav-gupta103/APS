class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> pascal(numRows);
        for(int i=0;i<numRows;i++){
            pascal[i]=vector<int>(i+1,-1);
            for(int j=0;j<=i;j++){
                if(j==0){
                    pascal[i][0]=1;
                    continue;
                }
                if(pascal[i][i-j]!=-1){
                    pascal[i][j]=pascal[i][i-j];
                    continue;
                }
                pascal[i][j]=pascal[i-1][j]+pascal[i-1][j-1];
            }
        }
        return pascal;
    }
};