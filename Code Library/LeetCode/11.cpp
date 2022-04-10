class Solution {
public:
    int maxArea(vector<int>& height) {
        int lo=0,hi=height.size()-1;
        int maxA=0;
        while(lo<hi){
            maxA=max(maxA,(hi-lo)* min(height[lo],height[hi]));
            if(height[lo]<height[hi])lo++;
            else hi--;
        }
        return maxA;
    }
};