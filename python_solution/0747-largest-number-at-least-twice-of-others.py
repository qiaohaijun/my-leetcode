 class Solution(object):
    def dominantIndex(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        
        max_val = 0
        max_idx = -1
        for i, n in enumerate(nums):
            if n > max_val:
                max_val = n
                max_idx = i
            
        for i, n in enumerate(nums):
            if n*2 > max_val and i!=max_idx:
                return -1
        return max_idx
