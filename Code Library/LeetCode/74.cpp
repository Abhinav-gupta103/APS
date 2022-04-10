class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size(),n=matrix[0].size(), i=0;
        while(i<m){
            if(matrix[i][0]<=target and matrix[i][n-1]>=target){
                int lo=0,hi=n-1;
                while(lo<=hi){
                    int mid=lo+ (hi-lo)/2;
                    if(matrix[i][mid]==target)return true;
                    else if(matrix[i][mid]>target)hi=mid-1;
                    else lo=mid+1;
                }
                return false;
            }
            else i++;
        }
        return false;
    }
};