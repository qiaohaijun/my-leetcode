class Solution(object):
    def longestPalindrome(self, s):
        """
        :type s: str
        :rtype: str
        """
        dp = [[False]*len(s) for _ in range(len(s))]
        
        max_idx = -1
        max_len = 0
        # 初始化1, 对应于奇数
        for i in range(len(s)):
            dp[i][i] = True
            max_idx = i
            max_len = 1
            
        # 初始化2, 对应于偶数
        for i in range(1, len(s)):
            if s[i-1] == s[i]:
                dp[i-1][i] = True
                max_idx = i-1
                max_len =2
        # 从 strlen == 3 开始递推
        for strlen in range(3,len(s)+1):
            for i in range(0,len(s)-strlen+1):
                j = i+strlen -1
                
                if s[i] ==s[j] and dp[i+1][j-1] == True:
                    dp[i][j] = True
                    if(strlen>max_len):
                        print max_idx, max_len
                        max_idx = i
                        max_len = strlen
        
        return s[max_idx:max_idx+max_len]
