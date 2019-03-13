class Solution(object):
    def uniquePathsWithObstacles(self, grid):
        """
        :type obstacleGrid: List[List[int]]
        :rtype: int
        """
        # use a meanful name replace magic number
        OBSTACLE_FLAG = 1
        # guard phase
        # 就是将出发点设置为一个 OBSTACLE_FLAG
        if grid[0][0] == OBSTACLE_FLAG:
          return 0
        
        # grid大小 mxn
        
        m = len(grid)
        n = len(grid[0])
        
        
        dp = [[0]*n for _ in range(m)]
        
        # 这个题目的状态转移方程不难
        # 需要注意的就是边界的初始化过程
        # 边界条件, 这个表示开始的位置只有一个办法到达
        dp[0][0] = 1
        
        # 因为只能向下和向右走, 所以初始化一下边界条件
        for i in range(1,m):
          if grid[i][0] == OBSTACLE_FLAG:
            break
          else:
            dp[i][0] = 1
        
        for j in range(1,n):
          if grid[0][j] == OBSTACLE_FLAG:
            break
          else:
            dp[0][j] = 1
          
        for i in range(1,m):
          for j in range(1,n):
            if grid[i][j] == OBSTACLE_FLAG:
              dp[i][j] = 0
            else:
              dp[i][j] += dp[i-1][j] + dp[i][j-1]
              
        return dp[-1][-1]
