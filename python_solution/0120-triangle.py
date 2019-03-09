class Solution(object):
    def minimumTotal(self, triangle):
        """
        :type triangle: List[List[int]]
        :rtype: int
        """
        ht = len(triangle)
        dp = [[-1]*ht for _ in range(ht)]
        
        # 自底向上方法解决数字三角形问题
        # init dp 
        for i in range (ht):
            dp[ht-1][i] = triangle[ht-1][i]
        # 注意一下倒序的 range 用法
        for i in range(ht-1-1,-1,-1):
            for j in range(i+1):
                l = dp[i+1][j]
                r = dp[i+1][j+1]
                dp[i][j] =  min(l,r)+triangle[i][j]
        return dp[0][0]
