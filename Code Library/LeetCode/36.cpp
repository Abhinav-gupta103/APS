class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        set<string> seen;
        for(int i=0;i<9;i++){
            for(int j=0;j<9;j++){
                char num=board[i][j];
                if(num!='.'){
                    if(seen.find(to_string(num)+"_R_"+to_string(i))!=seen.end()||
                       seen.find(to_string(num)+"_C_"+to_string(j))!=seen.end()||
                       seen.find(to_string(num)+"_B_"+to_string(i/3)+"_"+to_string(j/3))!=seen.end())return false;
                    else{
                        seen.insert(to_string(num)+"_R_"+to_string(i));
                        seen.insert(to_string(num)+"_C_"+to_string(j));
                        seen.insert(to_string(num)+"_B_"+to_string(i/3)+"_"+to_string(j/3));
                    }
                }
            }
        }
        return true;
    }
};