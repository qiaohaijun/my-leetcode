class Solution(object):
    def longestPalindromeSubseq(self, s):
        """
        :type s: str
        :rtype: int
        """
        
        n = len(s)
        max_len  =0 
        dp = [[0]*(n) for _ in range(n)]
        
        
        # init 1
        for i in range(n):
            dp[i][i] = 1
        
        # 需要根据递归公式的形式来填记录表
        for i in range(n-1,-1,-1):
            for j in range(i+1,n):
                if s[i] == s[j]:
                    dp[i][j] = dp[i+1][j-1]+2
                else:
                    dp[i][j] = max(dp[i+1][j],dp[i][j-1])
        return dp[0][-1]
