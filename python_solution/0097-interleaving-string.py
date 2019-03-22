class Solution(object):
    def isInterleave(self, s1, s2, s3):
        """
        :type s1: str
        :type s2: str
        :type s3: str
        :rtype: bool
        """
        l1 = len(s1)
        l2 = len(s2)
        l3 = len(s3)
        
        # fast return
        if (l1+l2) != l3:
          return False
        
        # dp[i][j] 表示bool 矩阵
        # 表示是否可以使用s1的前i个字符串,包括s1[i-1]和s2的j个字符串,包括s2[j-1], 可否构成构成s3
        dp = [[0]*(l2+1) for _ in range (l1+1)]
        
        dp[0][0] = True
        
        for i in range(1,l1+1):
          # 注意初始化的的时候, 这个是有影响的
          dp[i][0] = dp[i-1][0] and s1[i-1] == s3[i-1]
          
        for j in range(1,l2+1):
          dp[0][j] = dp[0][j-1] and s2[j-1] == s3[j-1]
        
        for i in range(1,l1+1):
          for j in range(1,l2+1):
            # 使用 s1[i-1]之前要检查一下之前使用s1[i-2]是否可以构成s3
            use_s1 = dp[i-1][j] and ( s3[i+j-1] == s1[i-1] )
            use_s2 = dp[i][j-1] and ( s3[i+j-1] == s2[j-1] )
            dp[i][j] = use_s2 or use_s1
            
        return dp[-1][-1]
