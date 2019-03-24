class Solution(object):
    def change(self, amount, coins):
        """
        :type amount: int
        :type coins: List[int]
        :rtype: int
        """
        
        dp =[[0]*(amount+1) for _ in range(len(coins)+1)]
        # 初始化角落条件[0][0]
        # 使用0个硬币构成0元的可能性为1.
        dp[0][0] = 1
        
        # 初始化边界条件1
        for i in range(1, len(coins)+1):
            dp[i][0] = 1
        
        # 初始化边界条件2
        for j in range(1, amount+1):
            dp[0][j] = 0
        
        # 递推公式
        for i in range(1, len(coins)+1):
            for j in range(1, amount+1):
                c = coins[i-1]
                k = 0
                while k*c<=j:
                    dp[i][j] += dp[i-1][j-k*c]
                    k+=1
                # if j >=c:
                #     dp[i][j] = dp[i-1][j]+dp[i][j-c]
                # else:
                #     dp[i][j] = dp[i-1][j]
        return dp[-1][-1]
        
        
