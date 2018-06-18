class Solution {
public:
    int maximalSquare(vector<vector<char>>& matrix) {

     if (matrix.empty() || matrix[0].empty()) return 0;  

      int m = matrix.size();
      int n = matrix[0].size();
      

      vector<vector<int>> dp(m,vector<int>(n,0));

      
      // init db
      for(int i=0; i<m; ++i) {
        for(int j=0; j<n; ++j) {
          
          if(matrix[i][j] == '1') {
            dp[i][j] = 1;
          }
        }
      }
      int ret_max = 0;
      for(int i=0; i<m; ++i) {
        for(int j=0; j<n; ++j){
          if(i&&j&& dp[i][j]){
            dp[i][j] = std::min(dp[i-1][j-1], std::min(dp[i-1][j], dp[i][j-1]))+1;
          }
          ret_max = std::max(ret_max, dp[i][j]);

        }
      }
      
      return ret_max*ret_max;
    }
};
