class Solution(object):
    def countSubstrings(self, s):
        """
        :type s: str
        :rtype: int
        """
        
        # 这个题目和最长回文子串是一样的题目类型
        # 区别在于最长回文子串求解的最长的回文
        # 这套题目要求的是所有的回文子串的数目
        n = len(s)
        dp = [[False]*n for _ in range(n)]
        

        ret_count = 0
        # 初始化1, 对应于奇数
        for i in range(n):
            dp[i][i] = True
            # 统计长度为1的回文子串的数目
            ret_count +=1
            
        # 初始化2, 对应于偶数
        for i in range(1, n):
            if s[i-1] ==  s[i]:
                dp[i-1][i] = True
                # 统计长度为2的回文子串的数目
                ret_count+=1
        # 从 strlen == 3 开始递推
        for strlen in range(3,n+1):
            for i in range(0,n-strlen+1):
                j = i+strlen -1
                
                if s[i] ==s[j] and dp[i+1][j-1] == True:
                    dp[i][j] = True
                    # 统计长度从3开始的回文子串的数目
                    ret_count +=1
        
        return ret_count
