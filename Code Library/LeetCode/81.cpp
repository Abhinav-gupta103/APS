class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int lo=0,n=nums.size(),hi=n-1;
        while(lo<=hi){
            int mid=(lo+hi)>>1;
            if(nums[mid]==target) return true;
            if(nums[lo]==nums[mid] and nums[hi]==nums[mid]) lo++,hi--;
            
            else if(nums[lo]<=nums[mid]){
                if(nums[lo]<=target and nums[mid]>target) hi=mid-1;
                else lo=mid+1;
            }
            
            else{
                if(nums[hi]>=target and nums[mid]<target) lo=mid+1;
                else hi=mid-1;
            }
        }
        return false;
    }
};