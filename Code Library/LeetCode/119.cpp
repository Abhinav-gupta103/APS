class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> r(rowIndex+1);
        if(rowIndex==0){
            r[0]=1;
            return r;
        }
        r[0]=r[rowIndex]=1;
        r[1]=r[rowIndex-1]=rowIndex;
        for(int i=1;i<(r.size()/2 + 1);i++){
            r[i]=r[rowIndex - i]=(unsigned long)r[i-1]*(unsigned long)(rowIndex-i+1)/i;
        }
        return r;
    }
};