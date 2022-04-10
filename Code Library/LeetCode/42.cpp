class Solution {
public:
    int trap(vector<int>& height) {
        int lo=0,hi=height.size()-1;
        int res=0,maxlo=0,maxhi=0;
        while(lo<hi){
            if(height[lo]<=height[hi]){
                if(height[lo]>=maxlo) maxlo=height[lo];
                else res+= maxlo-height[lo];
                lo++;
            }
            else {
                if(height[hi]>=maxhi) maxhi=height[hi];
                else res+= maxhi-height[hi];
                hi--;
            }
        }
        return res;        
    }
};