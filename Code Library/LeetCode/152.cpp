class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int res=INT_MIN,pro=1;
        for(int i=0;i<nums.size();i++){
            pro*=nums[i];
            res=max(res,pro);
            if(pro==0) pro=1;
        }
        pro=1;
        for(int i=nums.size()-1;i>=0;i--){
            pro*=nums[i];
            res=max(res,pro);
            if(pro==0)pro=1;
        }
        return res;
    }
};