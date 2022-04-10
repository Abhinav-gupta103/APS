class Solution {
    int maximum(vector<int> nums){
        int prev=nums[0],prev2=0;
        for(int i=1;i<nums.size();i++){
            int take=nums[i];
            if(i>1)take+=prev2;
            int not_take=prev;
            int cur=max(take,not_take);
            prev2=prev;
            prev=cur;
        }
        return prev;
    }
public:
    int rob(vector<int>& nums) {
        vector<int> temp1,temp2;
        int n=nums.size();
        if(n==1)return nums[0];
        for(int i=0;i<n;i++){
            if(i!=0)temp1.push_back(nums[i]);
            if(i!=n-1)temp2.push_back(nums[i]);
        }
        return max(maximum(temp1),maximum(temp2));
    }
};