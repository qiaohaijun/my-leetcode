class Solution(object):
    def maxProduct(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        
        max_dp = [0]*len(nums)
        min_dp = [0]*len(nums)
        
        # boundary condition
        # only has one element
        # 边界条件, 如果只有一个元素, 那么最大值, 最小值都是它
        max_dp[0] = nums[0]
        min_dp[0] = nums[0]
        
        my_max = nums[0]
        
        for i in range(1, len(nums)):
            tmp1 = max_dp[i-1]*nums[i]
            tmp2 = min_dp[i-1]*nums[i]
            max_dp[i] = max(tmp1,tmp2,nums[i])
            min_dp[i] = min(tmp1,tmp2,nums[i])
            my_max = max(max_dp[i],my_max)
            
        return my_max
