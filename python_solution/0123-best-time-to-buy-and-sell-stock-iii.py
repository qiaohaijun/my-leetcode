class Solution(object):
    def maxProfit(self, prices):
        """
        :type prices: List[int]
        :rtype: int
        """
        
        if len(prices) <= 1:
            return 0
        elif len(prices) ==2:
            return prices[1]-prices[0] if prices[1]>prices[0] else 0
        
        
        # dp 动态规划适用的条件是len(prices)>=3        
        
        # 注意这里必须要dp1[0] = 0   
        # dp 状态分析
        # dp1[i] 表示在位置 i 卖股票最大的收益
        # dp[0] 不可能购买购票, 其实这个位置是不可达的位置
        dp1 = [0]*len(prices)
        min_p = prices[0]
        
        for i in range(1, len(prices)):
          dp1[i] = max(dp1[i-1], prices[i]-min_p)
          min_p = min(min_p, prices[i])
        # 注意这里的必须要dp2[-1] = 0
        # 因为dp2[i]的状态表示的在i 位置购买股票的最大收益.
        # 你显然不能在 dp2[-1]购买股票, 这个位置不可达
        # 因为表示在 i 位置购买收益, 所以得倒序推导
        dp2 = [0]*len(prices)
        max_p = prices[-1]
        for i in range(len(prices)-2, -1, -1):
          dp2[i] = max( dp2[i+1], max_p - prices[i] )
          max_p = max(max_p, prices[i])
        
        max_profit = 0
        for i in range(1,len(prices)-1):
            # 注意可以同一天买卖股票
            # 可以在 i 天,卖掉旧股票, 卖新股票
            max_profit = max(max_profit, dp1[i]+dp2[i])

        
        return max_profit
