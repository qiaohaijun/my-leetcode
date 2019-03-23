class Solution(object):
    def longestPalindromeSubseq(self, s):
        """
        :type s: str
        :rtype: int
        """
        n = len(s)
        
        dp = [[0]*n for _ in range(n)]
        
        # init 1
        for i in range(n):
            dp[i][i] = 1
            
        for i in range(1,n):
            # 如果两者相同
            if s[i-1]==s[i]:
                dp[i-1][i] = 2
            # 注意不要遗漏这个位置的代码, 不然会有代码会有 bug
            else:
                dp[i-1][i] = 1
        
        for l in range(3,n+1):
            for i in range(0,n-l+1):
                j = i+l-1
                if s[i] == s[j]:
                    dp[i][j] = dp[i+1][j-1]+2
                else:
                    dp[i][j] = max(dp[i+1][j],dp[i][j-1])
        return dp[0][n-1]
