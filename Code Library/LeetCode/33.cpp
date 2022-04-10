class Solution {
public:
    int search(vector<int>& nums, int target) {
        int lo=0,n=nums.size(),hi=n-1;
        while(lo<hi){
            int mid=(lo+hi)/2;
            if(nums[mid]>nums[hi]) lo=mid+1;
            else hi=mid;
        }
        int ro=lo;
        lo=0,hi=n-1;
        while(lo<=hi){
            int mid=(lo+hi)/2;
            int realmid=(mid+ro)%n;
            if(nums[realmid]==target) return realmid;
            else if(nums[realmid]<target)lo=mid+1;
            else hi=mid-1;
        }
        return -1;
    }
};