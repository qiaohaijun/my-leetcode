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
        
        if l1+l2!= l3:
            return False
        # dp [i][j] 表示的状态是使用前 i 个s1的字符和前 j 个s2的字符是否可以构成 s3
        dp = [[False]*(l2+1) for _ in range(l1+1)]
        
        # 初始化1
        # 表示 使用空集构成空集是否为真
        dp[0][0] = True
        # 初始化2
        # 初始化边界条件
        for i in range(1,l1+1):
            if dp[i-1][0] != True:
                break
            dp[i][0] = s1[i-1] ==  s3[i-1]
        # 初始化3
        # 初始化边界条件
        for j in range(1,l2+1):
            if dp[0][j-1] != True:
                break
            dp[0][j] = s2[j-1] == s3[j-1]
        # 递推过程
        for i in range(1,l1+1):
            for j in range(1,l2+1):
                use_s1 = dp[i-1][j] and (s1[i-1] == s3[i+j-1])
                use_s2 = dp[i][j-1] and (s2[j-1] == s3[i+j-1])
                dp[i][j] = use_s1 or use_s2
        
        return dp[-1][-1]
