class Solution {
    
    void hero(int ind,int n,int k,vector<vector<int>> &ans,vector<int> &res){
        // if(ind>n)return;
        if(res.size()==k){
            ans.push_back(res);
            return;
        }
        for(int i=ind;i<=n;i++){
            res.push_back(i);
            hero(i+1,n,k,ans,res);
            res.pop_back();
            // hero(i,n,k,ans,res);
        }
    }
    
public:
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>> ans;
        vector<int> res;
        hero(1,n,k,ans,res);
        return ans;
    }
};