class Solution(object):
    def dp(self,nums):
        # precondition len(nums) >=1 
        # 比较标准的 house-robber 解答过程
        if len(nums) ==1:
            return nums[0]
        elif len(nums) ==2:
            return max(nums[0], nums[1])
        dp = [0]*len(nums)
        dp[0] = nums[0]
        dp[1] = max(nums[0],nums[1])
        for i in range(2,len(nums)):
            dp[i] = max(dp[i-2]+nums[i],dp[i-1])
        return dp[-1]
    
    def rob(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        
        # guard phase
        # nums 如果很短的化, 不用拆分为两个数组来分别求解.
        if len(nums) == 0:
            return 0
        elif len(nums) ==1:
            return nums[0]
        
        # 拆分数组, 转化为已经解决的问题
        # sub1 nums[0] to nums[N-2]
        # sub2 nums[1] to nums[N-1]
        sub1 = nums[0:-1]
        sub2 = nums[1:]
        
        return max(self.dp(sub1), self.dp(sub2))
