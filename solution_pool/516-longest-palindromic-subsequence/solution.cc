class Solution {
public:
    int longestPalindromeSubseq(string s) {
      int sLen = s.size();
      //动态生成多维dp
      vector<vector<int>> dp (sLen,vector<int>(sLen,0));
      
      for(int i=0; i<sLen; ++i) {
        dp[i][i] = 1;
      }
      
      for(int j=0; j<sLen; ++j) {
        for(int i=j-1; i>=0; --i){
          if(s[i] == s[j]) {
            dp[i][j] = dp[i+1][j-1] +2;
          } else {
            dp[i][j] = std::max(dp[i+1][j], dp[i][j-1]);
          }
        }
      }
      return dp[0][sLen-1];
        
    }
};
