class Solution {
 public:
  int minPathSum(vector<vector<int> > &grid) {

    int m = grid.size();
    int n = grid.at(0).size();

    std::vector<std::vector<int> > dp;
    dp.resize(m);

    for (int i = 0; i < m; ++i) {
      dp.at(i).resize(n);
    }

    dp[0][0] = grid[0][0];

    for (int i = 1; i < m; ++i) {
      dp[i][0] = dp[i - 1][0] + grid[i][0];
    }

    for (int k = 1; k < n; ++k) {
      dp[0][k] = dp[0][k - 1] + grid[0][k];
    }

    for (int i = 1; i < m; ++i) {
      for (int k = 1; k < n; ++k) {
        dp[i][k] = std::min<int>(dp[i - 1][k], dp[i][k - 1]) + grid[i][k];
      }
    }

    return dp[m - 1][n - 1];
  }
};
