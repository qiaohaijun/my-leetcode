class Solution(object):
    def canPartition(self, nums):
        """
        :type nums: List[int]
        :rtype: bool
        """
        # guard phase 
        # 处理异常情况
        sum = 0
        for n in nums:
            sum+=n
        if sum%2==1:
            return False
        
        target_num = sum//2
        
        
        print target_num
        dp =  [[False]*(target_num+1) for _ in range(len(nums)+1)]
        
        # init
        # 使用前 i 个元素组成空集,是 ok 的 TRUE
        # dp[i][0] 表示的是上面提示的意思
        # dp[i][0] 表示的是如何用前 i 个数字构建一个空集, 这个肯定是 ok 的 
        
        for i in range(len(nums)+1):
            dp[i][0] = True
        
        for i in range(1, len(nums)+1):
            for j in range(1, target_num+1):
                if j>= nums[i-1]:
                    dp[i][j] = dp[i-1][j] or dp[i-1][j-nums[i-1]]
                else:
                    dp[i][j] = dp[i-1][j]
        return dp[-1][-1]
    
