class Solution(object):
    def change(self, amount, coins):
        """
        :type amount: int
        :type coins: List[int]
        :rtype: int
        """
        # dp[i][j]
        # 表示使用前 i 个硬币可以凑成面额 j 的总数
        dp =  [[0]*(amount+1) for _ in range(len(coins)+1)]
        
        # 表示用空集组成空集的个数是一个
        dp[0][0] = 1
        
        # 递推公式
        # 一个一个增加硬币的数量
        for i in range(1,len(coins)+1):
            for j in range(0,amount+1):
                # 不使用 nums[i-1]
                # 因为使用已经凑成了数值 j
                dp[i][j] += dp[i-1][j]
                
                # 为什么使用等号??
                # TODO 
                # 背包算法使用优化之后的写法, 已经对于递推关系有所改变.
                if j>=coins[i-1]:
                    # 使用 nums[i-1]这个数字
                    dp[i][j] += dp[i][j-coins[i-1]]
                    
        return dp[-1][-1]
