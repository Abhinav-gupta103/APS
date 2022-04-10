class Solution {
public:
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> temp=nums;
        int t=1;
        while(t>0){
            int k,n=temp.size();
            for(k=n-2;k>=0;k--){
                if(temp[k]<temp[k+1])break;
            }
            if(k<0){
                reverse(temp.begin(),temp.end());
            }
            else{
                int l;
                for(l=n-1;l>k;l--){
                    if(temp[l]>temp[k])break;
                }
                swap(temp[l],temp[k]);
                reverse(temp.begin()+k+1,temp.end());
            }
            ans.push_back(temp);
            if(temp==nums)break;
        }
        return ans;
    }
};