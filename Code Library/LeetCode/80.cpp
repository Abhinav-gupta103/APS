class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int cnt=0, n=nums.size();
        for(int i=2;i<n;i++){
            if(nums[i-2-cnt]==nums[i]) cnt++;
            if(cnt>0) nums[i-cnt]=nums[i];
        }
        return n-cnt;
    }
};