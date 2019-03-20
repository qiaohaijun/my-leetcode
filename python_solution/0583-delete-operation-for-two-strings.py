class Solution(object):
    def minDistance(self, s1, s2):
        """
        :type word1: str
        :type word2: str
        :rtype: int
        """
                
        # matrix shape mxn
        m = len(s1)
        n = len(s2)
        
        # dp 状态
        # dp[i][j] 表示的是从s1转化为s2的操作步骤
        dp = [[0]*(n+1) for _ in range(m+1)]
        dp[0][0] = 0
        
        
        # 这里和编辑距离的初始化操作一样
        for i in range(1, n+1):
          dp[0][i] = i
        
        # 这里和编辑距离的初始化操作一样
        for j in range(1,m+1):
          dp[j][0] = j
        
        for i in range(1, m+1):
          for j in range(1,n+1):
            if s1[i-1] == s2[j-1]:
              dp[i][j] = dp[i-1][j-1]
            else:
              # dp[i-1][j]到dp[i][j]的状态转移
              # 相当于s1删除了s1[i-1]
              p1 = dp[i-1][j]+1
              # dp[i][j-1]到dp[i][j]的状态转移
              # 相当于s2 删除了s2[j-1]
              # 或者是s1 插入了s2[j-1]
              p2 = dp[i][j-1]+1
              
              dp[i][j] = min(p1,p2)
        return dp[-1][-1]
