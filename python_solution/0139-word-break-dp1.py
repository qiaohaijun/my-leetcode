class Solution(object):
    def wordBreak(self, s, wordDict):
        """
        :type s: str
        :type wordDict: List[str]
        :rtype: bool
        """
        
        # 初始化
        dp = [False]*(len(s)+1)
        # 动态规划状态 dp[i]表示在 i 是否可以切分.
        dp[0] = True
        
        # [leet] 字典为[le,et]
        # [0,1], [0,2], [0,3], [0,4]
        # [1,2], [1,3], [1,4]
        # [2,3], [2,4]
        # [3,4]
        
      
        for i in range(0,len(s)):
            # j=i+1的原因, 因为python 的 slice 的语法, 我们从1个字母开始比较
            for j in range(i+1,len(s)+1):
                if dp[i] ==True and s[i:j] in wordDict:
                    dp[j] = True
        return dp[-1]
                
        
