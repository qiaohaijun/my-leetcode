class Solution(object):
    def canJump(self, nums):
        """
        :type nums: List[int]
        :rtype: bool
        """
        reach = 0
        for i,num in enumerate(nums):
            if reach < i or reach >= len(nums)-1:
                break
            reach = max(reach,i+num)
            
        return reach >= len(nums)-1
