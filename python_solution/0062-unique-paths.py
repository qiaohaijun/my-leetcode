class Solution(object):
    def minPathSum(self, grid):
        """
        :type grid: List[List[int]]
        :rtype: int
        """
        # 注意初始化
        # m x n
        
        m = len(grid)
        n = len(grid[0])
        
        # init dp
        dp = [[0]*n for _ in range(m)]        
        dp[0][0] = grid[0][0]
        

        # 初始化边界的情况,避免padding
        # init row
        for i in range(1,n):
          dp[0][i] = dp[0][i-1]+grid[0][i]
          
        # init col
        for j in range(1,m):
          dp[j][0] = dp[j-1][0] + grid[j][0]
          
        # 打表剩下的位置
        for i in range(1,m):
          for j in range(1,n):
          
            dp[i][j] = min(dp[i-1][j],dp[i][j-1])+grid[i][j]
              
        return dp[-1][-1]
