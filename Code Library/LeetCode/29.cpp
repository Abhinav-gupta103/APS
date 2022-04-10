class Solution {
public:
    int divide(int l, int y) {
      if(l <= INT_MIN && y == -1)return INT_MAX;
      long long int a = labs(l);
      long long int b = labs(y);
      long long int ans = 0;
      while(a-b >= 0){
         int x = 0;
         while(a-(b << 1 << x) >= 0){
            x++;
         }
         a -= b<<x;
         ans += 1<<x;
      }
      return (l>0)== (y>0)?ans:-ans;
   }
};