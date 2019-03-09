class Solution(object):
    def rob(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        
        # guard phase
        if len(nums) == 0:
            return 0
        elif len(nums) == 1:
            return nums[0]
        elif len(nums) ==2:
            return max(nums[0],nums[1])
        
        # init dp 
        dp = [0]*len(nums)
        
        # boundary condition
        # 只有一个房子的时候, 作为有责任感的小偷, 我们坚决不空手而归. 有一个偷一个.
        dp[0] = nums[0]
        # 当只有两个房子的时候, 我们要去偷最有钱的房子
        dp[1] = max(nums[0], nums[1])
        
        # dp 
        for i in range(2, len(nums)):
            dp[i]=max(nums[i]+dp[i-2], dp[i-1])
        return dp[-1]
