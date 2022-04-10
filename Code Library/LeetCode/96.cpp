class Solution {
    int solve(vector<int> &dp,int n){
        if(n<=1)return 1;
        if(dp[n]!=-1)return dp[n];
        int res{};
        for(int i{1};i<=n;i++){
            res+=solve(dp,i-1)*solve(dp,n-i);
        }
        return dp[n]=res;
    }
public:
    int numTrees(int n) {
        vector<int> dp(n+1,-1);
        return solve(dp,n);
    }
};