class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int> mp;
        int a,n=nums.size();
        for(int i=0;i<n;i++){
            mp[nums[i]]++;
            if(mp[nums[i]]> n/2){
                a=nums[i];
                break;
            }
        }
//         int a;
//         for(auto it : mp){
//             if(it.second > )
            
//         }
        return a;
    }
};