class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> res;
        int tar=0;
        for(int i=0;i<nums.size();i++){
            // if(tar<nums[i]) continue;
            tar=target-nums[i];
            res.push_back(i);
            for(int j=i+1;j<nums.size();j++){
                if(tar<nums[j]) continue;
                if(nums[j]==tar){
                    res.push_back(j);
                    return res;
                }
            }
            res.pop_back();
        }
        return res;
    }
};