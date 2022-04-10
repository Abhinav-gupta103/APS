class Solution {
    int hero(int n,int dp[]){
        if(n==0) return 1;
        if(n<0) return 0;
        if(dp[n]!= -1)return dp[n];
        return dp[n]=hero(n-1,dp)+hero(n-2,dp);
    }
public:
    int climbStairs(int n) {
        int dp[n+1];
        memset(dp,-1,sizeof dp);
        return hero(n,dp);
    }
};