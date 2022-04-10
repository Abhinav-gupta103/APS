class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> ans;
        sort(intervals.begin(),intervals.end());
        int startPos=intervals[0][0];
        int endPos=intervals[0][1];
        for(int i=1;i<intervals.size();i++){
            if(intervals[i][0]<=endPos){
                endPos=max(endPos,intervals[i][1]);
            }
            else if(intervals[i][0]>endPos){
                ans.push_back({startPos,endPos});
                startPos=intervals[i][0];
                endPos=intervals[i][1];
            }
        }
        ans.push_back({startPos,endPos});
        return ans;
        
    }
};