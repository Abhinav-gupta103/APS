class Solution {
    void hero(vector<string> &res,string str,int o,int c){
        if(o==0 && c==0){
            res.push_back(str);
            return;
        }
        if(o>0){
            hero(res,str+"(",o-1,c+1);
        }
        if(c>0){
            hero(res,str+")",o,c-1);
        }
    }
public:
    vector<string> generateParenthesis(int n) {
        vector<string> res;
        hero(res,"",n,0);
        return res;
    }
};