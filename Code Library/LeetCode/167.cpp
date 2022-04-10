class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
        int lo=0,hi=n-1;
        while(lo<hi){
            if(nums[lo]+nums[hi]==target) break;
            
            if(nums[lo]+nums[hi]>target){
                hi--;
            }
            else lo++;
        }
        return {lo+1,hi+1};
    }
};