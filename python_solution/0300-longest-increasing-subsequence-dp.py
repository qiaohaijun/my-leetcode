class Solution(object):
    def lengthOfLIS(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        n = len(nums)
        if n == 0:
          return 0
        
        # 所有的单个的nums[i] 都可以构成一个lis, 长度为1
        # 但是如果改为dp =[1]*n,结果是错误的,需要找找原因.
        dp = [0]*n
        # dp初始化条件, 如果只有一个元素, 那么这个dp[0]=1
        dp[0] = 1
        max_lis = 1
        
        for i in range (1,n):
          for j in range(0,i):
            # 对于每一个小于nums[i] >nums[j], 更新公式
            if(nums[i]>nums[j]):
              dp[i] = max(dp[i],dp[j])
              
          dp[i]+=1
          max_lis = max(max_lis,dp[i])
      
        return max_lis
