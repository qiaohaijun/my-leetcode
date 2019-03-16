class Solution(object):
    def wordBreak(self, s, wordDict):
        """
        :type s: str
        :type wordDict: List[str]
        :rtype: bool
        """
        dp = [False] * (len(s)+1)
        dp[0] =True
        
        # [leet] dict[le,et]
        # i==1:[0,1]
        # i==2:[0,2],[1,2]
        # i==3:[0,3],[1,3],[2,3]
        # i==4:[0,4],[1,4],[2,4],[3,4]
        # i==5;[0,5],[1,5],[2,5],[3,5],[4,5]
        for i in range(1,len(s)+1):
            for j in range(0,i):
                if dp[j] == True and s[j:i] in wordDict:
                    dp[i] = True
                    break
        return dp[-1]
