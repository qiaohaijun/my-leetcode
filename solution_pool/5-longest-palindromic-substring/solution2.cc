class Solution {
public:
    string longestPalindrome(string s) {
        // guard
      if(s.size()<=1){
        return s;
      }
      
      const int len = s.size();
      bool dp[len][len] = {false};

      int max_len{};
      int start_idx{};
      
      // init
      for(int i=0; i<len;++i) {
        dp[i][i] = true;
        start_idx=i;
        max_len=1;
      }
      
      for(int i=0; i<len-1; ++i){
        if(s[i] ==s[i+1]) {
          dp[i][i+1] = true;
          start_idx=i;
          max_len=2;
        }
      }
      
      //int resLeft = 0, resRight = 0;

      for(int k=3; k<=len;++k){
        for(int i=0; i<=len-k;++i) {
          int j = i+k-1;
          if(s[i] == s[j] && dp[i+1][j-1]) {
            dp[i][j] = true;
            if(max_len < k){
              max_len = k;
              start_idx = i;
            }
          }
        }
      }
      return s.substr(start_idx,max_len);
    }
};
