class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int n=gas.size();
        int tank=0,cur_tank=0,ans=0;
        for(int i=0;i<n;i++){
            tank+=gas[i]-cost[i];
            cur_tank+=gas[i]-cost[i];
            if(cur_tank<0){
                cur_tank=0;
                ans=i+1;
            }
        }
        if(tank<0) return -1;
        return ans;
    }
};