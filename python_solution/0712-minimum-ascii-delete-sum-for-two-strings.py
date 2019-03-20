class Solution(object):
    def minimumDeleteSum(self, s1, s2):
        """
        :type s1: str
        :type s2: str
        :rtype: int
        """
        
        # mxn
        m = len(s1)
        n = len(s2)
        
        dp = [[0]*(n+1) for _ in range(m+1)]
        dp[0][0] = 0
        
        psum1 = 0
        for i in range(1, n+1):
          psum1 += ord(s2[i-1])
          dp[0][i] = psum1
        
        psum2 = 0
        for j in range(1,m+1):
          psum2 += ord(s1[j-1])
          dp[j][0] = psum2
        
        for i in range(1, m+1):
          for j in range(1,n+1):
            if s1[i-1] == s2[j-1]:
              dp[i][j] = dp[i-1][j-1]
            else:
              p1 = dp[i-1][j]+ord(s1[i-1])
              p2 = dp[i][j-1]+ord(s2[j-1])
              
              dp[i][j] = min(p1,p2)
        return dp[-1][-1]
