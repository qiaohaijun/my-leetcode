class Solution(object):
    def canJump(self, nums):
        """
        :type nums: List[int]
        :rtype: bool
        """
        
        # reach == 0 不是随便设置的一个数字
        # 而是必须等于0,因为必须得从0开始.
        reach = 0
        
        for i in range(len(nums)):
            
            # 首先得能到这里才可以计算下一步的 reach
            if reach >= i:
                reach = max(reach,nums[i]+i)
            else:
                return False
        return True
