class Solution {
    void hero(int ind,vector<vector<int>> &ans,vector<int> &res,vector<int> nums,int N){
        if(ind==N){
            ans.push_back(res);
            return;
        }
        res.push_back(nums[ind]);
        hero(ind+1,ans,res,nums,N);
        res.pop_back();
        hero(ind+1,ans,res,nums,N);
        return;
    }
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> res;
        hero(0,ans,res,nums,nums.size());
        return ans;
    }
};