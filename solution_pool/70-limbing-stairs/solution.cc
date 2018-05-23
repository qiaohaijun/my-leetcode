class Solution {
public:
    int climbStairs(int n) {
      vector<int> opt(n+1,0);
      
      opt[1] = 1;
      opt[2] = 2;
      for(int i=3;i<=n;++i){
        opt[i] = opt[i-2]+opt[i-1];
      }
      return opt[n];
    }
};
