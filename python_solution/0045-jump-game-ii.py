class Solution(object):
    def jump(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        l = 0
        r = 0
        nr = 0
        step = 0
        while nr<len(nums)-1:
            step+=1
            
            for i in range(l,r+1):
                nr = max(nums[i]+i,nr)
            l = r+1
            r = nr
        return step
