class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int n=nums.size();
        int closest=nums[0]+nums[1]+nums[2];
        sort(nums.begin(),nums.end());
        for(int i=0;i<n-2;i++){
            if(i==0 or nums[i]!=nums[i-1]){
                int lo=i+1,hi=n-1;
                while(lo<hi){
                    int currSum=nums[lo]+nums[hi]+nums[i];
                    if(currSum==target) return target;
                    if(abs(currSum-target) < abs(closest-target)){
                        closest=currSum;
                    }
                    else if(currSum<target){
                        lo++;
                    }
                    else {
                        hi--;
                    }
                }
            }
        }
        return closest;
    }
};