class Solution(object):
    def maxSubArray(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        n = len(nums)
        dp = [0]*n
        dp[0] = nums[0]
        ret_max = nums[0]
        for i in range(1, n):
          dp[i] = max(0,dp[i-1])+nums[i]
          ret_max = max(ret_max, dp[i])
        return ret_max
