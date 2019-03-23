class Solution(object):
    def numSquares(self, n):
        """
        :type n: int
        :rtype: int
        """
        # 将题目转化为零钱问题
        coins = []
        # 注意这里的边界条件,包括 n
        for i in range(1,n+1):
            # 等号一定要用
            if i*i <= n:
                coins.append(i*i)
        
        import sys
        #因为求最小数目, 所以初始化的时候来个大大的, 不要用自定义的数字
        dp = [sys.maxint]*(n+1)
        
        # 不可能凑出零钱
        # 其实我疑惑的是,如果使用0个硬币不行吗?
        dp[0]=0
        
        for i in range(1,n+1):
            for c in coins:
                if i>=c:
                    #递归条件, 核心的核心
                    dp[i] = min(dp[i],dp[i-c]+1)
        return dp[-1]
    
