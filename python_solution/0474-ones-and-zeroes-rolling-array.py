class Solution(object):
    def findMaxForm(self, strs, m, n):
        """
        :type strs: List[str]
        :type m: int
        :type n: int
        :rtype: int
        """
        
        if not strs:
            return 0
        nums = len(strs)
        dp = [[[0] * (n + 1) for _ in range(m + 1)] for _ in range(2)]

        for i in range(1, nums + 1):
            n0 = strs[i-1].count("0")
            n1 = strs[i-1].count("1")

            for j in range(m+1):
                for k in range(n+1):
                    if j >= n0  and k >= n1:
                        # use_i = dp[(i-1)%2][j][k]
                        # non_i = dp[(i-1)%2][j-n0][k-n1]+ 1
                        dp[i%2][j][k] = max(dp[(i-1)%2][j][k], dp[(i-1)%2][j-n0][k-n1]+ 1)
                    else:
                        dp[i%2][j][k] = dp[(i-1)%2][j][k]
        return dp[nums%2][-1][-1]
                
                
