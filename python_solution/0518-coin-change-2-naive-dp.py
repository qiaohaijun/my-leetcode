class Solution(object):
    def change(self, amount, coins):
        """
        :type amount: int
        :type coins: List[int]
        :rtype: int
        """
        
        # 2d DP
        # shape [amount+1, len(coins)+1]
        dp = [ [0]*(amount+1) for _ in range(len(coins)+1)]
        
        # 用0个硬币来拼凑0元, 这种情况是不存在的
        dp[0][0] = 1
        
        for i in range(1,len(coins)+1):
            for j in range(0, amount+1):
                # laioffer 
                # faster dynamic programming
                k = 0
                while k*coins[i-1] <=j:
                    
                    dp[i][j] += dp[i-1][j-k*coins[i-1]]
                    k+=1
                
        return dp[-1][-1]
            
