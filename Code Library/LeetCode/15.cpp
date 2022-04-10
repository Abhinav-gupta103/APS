class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n=nums.size();
        if(n<3)return {};
        sort(nums.begin(),nums.end());
        vector<vector<int>> ans;
        for(int i=0;i<n-2;i++){
            if(i==0 or nums[i]!=nums[i-1]){
                int tar= 0 -nums[i];
                int lo=i+1,hi=n-1;
                while(lo<hi){
                    if(nums[lo]+nums[hi]== tar){
                        ans.push_back({nums[i],nums[lo],nums[hi]});
                        while(lo>hi && nums[lo]== nums[lo+1]) lo++;
                        while(lo<hi && nums[hi]== nums[hi-1]) hi--;
                        hi--,lo++;
                    }
                    else if(nums[lo]+nums[hi]>tar)hi--;
                    else lo++;
                }
            }
        }
        return ans;
    }
};