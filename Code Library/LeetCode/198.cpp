class Solution {
public:
    int rob(vector<int>& nums) {
        int prev=nums[0],prev2=0;
        int cur=0;
        for(int i=1;i<nums.size();i++){
            int take=nums[i];
            if(i>1)take+=prev2;
            int not_take=prev;
            cur=max(take,not_take);
            prev2=prev;
            prev=cur;
        }
        return prev;
    }
};