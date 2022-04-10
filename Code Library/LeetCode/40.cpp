class Solution {
    void hero(int ind,vector<int>& arr, int target, vector<vector<int>>& ans,vector<int>& res){
        
        if(target==0){
            ans.push_back(res);
            return;
        }
        for(int i=ind;i<arr.size();i++){
            if(i!=ind and arr[i]==arr[i-1]) continue;
            if(target<arr[i]) break;
            res.push_back(arr[i]);
            hero(i+1,arr,target-arr[i],ans,res);
            res.pop_back();
        }
    }
public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> res;
        sort(candidates.begin(),candidates.end());
        hero(0,candidates,target,ans,res);
        return ans;
        
    }
};