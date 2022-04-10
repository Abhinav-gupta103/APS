class Solution {
    int last(vector<int> num,int lo,int hi,int tar){
        int mid;
        int res=-1;
        while(lo<=hi){
            mid= lo+((hi-lo)/2);
            if(num[mid]==tar){
                res=mid;
                lo=mid+1;
            }
            if(num[mid]<tar){
                lo=mid+1;
            }
            if(num[mid]>tar){
                hi=mid-1;
            }
        }
        return res;
    }
    
    int first(vector<int> num,int lo,int hi,int tar){
        int mid;
        int res=-1;
        while(lo<=hi){
            mid= lo + (hi-lo)/2;
            if(num[mid]==tar){
                res=mid;
                hi=mid-1;
            }
            if(num[mid]<tar){
                lo=mid+1;
            }
            if(num[mid]>tar){
                hi=mid-1;
            }
        }
        return res;
    }
    
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> ans;
        ans.push_back(first(nums,0,nums.size()-1,target));
        if(ans[0]==-1)return {-1,-1};
        ans.push_back(last(nums,0,nums.size()-1,target));
        return ans;
    }
};