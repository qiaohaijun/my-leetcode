class Solution(object):
    def maxProfit(self, prices):
        """
        :type prices: List[int]
        :rtype: int
        """
        n = len(prices)
        
        if n == 0:
            return 0
        # 状态解释
        # buy_dp[i] 表示的是在 i 进行买入操作的最大收益
        # sell_dp[i] 表示的是在 i 进行卖出操作的最大收益
        # cool_dp[i] 表示的是在 i 处于冷冻期的时候的最大收益
        buy_dp = [0]*n
        sell_dp = [0]*n
        cool_dp = [0]*n
        
        # 状态初始化
        
        buy_dp[0] = -prices[0]
        sell_dp[0] = 0
        cool_dp[0] = 0
        
        for i in range(1,n):
            # buy_dp[i] = buy_dp[i-1]表示的是空操作
            # buy_dp[i] = cool_dp[i-1]-prices[i-1] 
            # 表示的是从冷却期状态 转化出来, 开始买入
            buy_dp[i] = max(buy_dp[i-1],cool_dp[i-1]-prices[i])
            # sell_dp[i] = sell_dp[i-1] 表示的是空操作
            # sell_dp[i] = buy_dp[i-1]+prices[i]
            # 表示状态转换, 从买入状态进入卖出状态
            sell_dp[i] = max(sell_dp[i-1], buy_dp[i-1]+prices[i])
            
            # cool_dp[i] = cool_dp[i-1] 表示空操作
            # cool_dp[i] = sell_dp[i-1] 表示的是状态转换
            cool_dp[i] = max(cool_dp[i-1], sell_dp[i-1])
        # 最后的状态是卖出或者 cooldown 的最大值
        return max(sell_dp[-1],cool_dp[-1])
