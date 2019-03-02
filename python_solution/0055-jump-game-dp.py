class Solution(object):
    def canJump(self, nums):
        """
        :type nums: List[int]
        :rtype: bool
        """
        jump = [0]*len(nums)
        
        for i in range(1,len(nums)):
            jump[i] = max(jump[i-1],nums[i-1])-1
            if jump[i] < 0:
                return False
        return True
