class Solution {
    void hero(int ind, vector<int> candidates, vector<vector<int>>& ans, vector<int>& res, int target){
        if(target<0)return;
        if(target==0){
            ans.push_back(res);
            return;
        }
        for(int i=ind;i<candidates.size();i++){
            res.push_back(candidates[i]);
            hero(i,candidates,ans,res,target-candidates[i]);
            res.pop_back();
        }
    }
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> res;
        hero(0,candidates,ans,res,target);
        return ans;
    }
};