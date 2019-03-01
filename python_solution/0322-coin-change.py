class Solution(object):
    def coinChange(self, coins, amount):
        """
        :type coins: List[int]
        :type amount: int
        :rtype: int
        """
        
        coins.sort()
        # 边界条件
        dp = [amount+1]*(amount+1)
        dp[0]=0
        for i in range(1,amount+1):
            dp[i] = amount+1
            for c in coins:
                if c<=i:
                    dp[i] = min(dp[i],dp[i-c]+1)
                    
                    
        if dp[amount] == amount+1:
            return -1
        else:
            return dp[amount]
