class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.size()<=1) return nums.size();
        int low=0;
        int mid=1;
        // int k=0
        while(mid<nums.size()){
            if(nums[low]!=nums[mid]){
                low++;
                nums[low]=nums[mid];
                mid++;
                
                continue;
            }
            mid++;
        }
        return low+1;
    }
};

// [1,1,2,3,4,4,5,5,5,5,6]