class Solution {
    void hero(int ind,vector<vector<int>> &ans,vector<int> &res,vector<int> nums){
        ans.push_back(res);
        
        for(int i=ind;i<nums.size();i++){
            if(i!=ind and nums[i]==nums[i-1]) continue;
            res.push_back(nums[i]);
            hero(i+1,ans,res,nums);
            res.pop_back();
        }
    }
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> res;
        sort(nums.begin(),nums.end());
        hero(0,ans,res,nums);
        return ans;
    }
};