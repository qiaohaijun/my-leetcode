class Solution(object):
    def uniquePaths(self, m, n):
        """
        :type m: int
        :type n: int
        :rtype: int
        """
        
        # grid大小 mxn
        
        dp = [[0]*n for _ in range(m)]
        
        # 这个题目的状态转移方程不难
        # 需要注意的就是边界的初始化过程
        # 边界条件, 这个表示开始的位置只有一个办法到达
        dp[0][0] = 1
        
        # 因为只能向下和向右走, 所以初始化一下边界条件
        for i in range(1,m):
          dp[i][0] = 1
        
        for j in range(1,n):
          dp[0][j] = 1
          
        for i in range(1,m):
          for j in range(1,n):
            dp[i][j] += dp[i-1][j] + dp[i][j-1]
            
        return dp[-1][-1]
          
          
