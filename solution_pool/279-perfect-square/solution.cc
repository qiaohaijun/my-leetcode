class Solution {
public:
    int numSquares(int n) {
      vector<int> dp{0};

      while(dp.size()<=n){
        int m = dp.size();
        int nums = INT_MAX;
        for(int i=1;i*i<=m;++i){
          nums = std::min(nums, dp[m-i*i]+1);
        }
        dp.push_back(nums);
      }
      return dp[n];
    }
};
