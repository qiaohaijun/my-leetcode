class Solution(object):
    def maxSubArray(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        # guard
        if len(nums) == 0:
            return 0
        elif len(nums) == 1:
            return nums[0]
        
        # 边界条件
        dp = [0]*len(nums)
        
        dp[0] = nums[0]
        ret_max = dp[0]
        for i in range(len(nums)):
            if dp[i-1] > 0:
                dp[i] = dp[i-1]+nums[i]
            else:
                dp[i] = nums[i]
            ret_max = max(ret_max, dp[i])
        return ret_max
                
