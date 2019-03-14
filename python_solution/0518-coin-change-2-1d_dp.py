class Solution(object):
    def change(self, amount, coins):
        """
        :type amount: int
        :type coins: List[int]
        :rtype: int
        """
        n = amount
        dp=[0]*(n+1)
        
        dp[0] = 1
        
        # 注意范围
        for i in range(1,len(coins)+1):
          # 注意这里没有采用逆序更新
          # 因为如果逆序更新 dp[j-c] 表示的是 dp[i-1][j-c], 而我们需要的是dp[i][j-c]
          for j in range(0,n+1):
            # 使用c来简化代码, 类似c++的引用技巧, 避免index犯错.
            c = coins[i-1]
            if j>= c:
              dp[j] = dp[j] +dp[j-c]

              
        return dp[-1]
        
