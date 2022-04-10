class Solution {
public:
    int findKthLargest(vector<int>& a, int k) {
        priority_queue<int,vector<int>, greater<int> > pq;
        for(int i=0;i<k;i++){
            pq.push(a[i]);
        }
        for(int i=k;i<a.size();i++){
            if(pq.top()<a[i]){
                pq.pop();
                pq.push(a[i]);
            }
        }
        return pq.top();
    }
};