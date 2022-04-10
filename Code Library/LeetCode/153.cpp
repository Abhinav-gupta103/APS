class Solution {
public:
    int findMin(vector<int>& nums) {
        int lo=0,hi=nums.size()-1;
        while(lo<hi){
            int mid=(lo+hi)>>1;
            if(nums[lo]<nums[hi])return nums[lo];
            
            if(nums[mid]>=nums[lo]){
                lo=mid+1;
            }
            else{
                hi=mid;
            }
        }
        return nums[lo];
    }
};