class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int lo=0,hi=nums.size()-1;
        int mid;
        while(lo<hi){
            mid=(lo+hi)/2;
            int mid2=mid+1;
            if(nums[mid]<nums[mid2]){
                lo=mid2;
            }
            else hi=mid;
        }
        return lo;
    }
};