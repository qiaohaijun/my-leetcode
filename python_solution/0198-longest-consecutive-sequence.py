class Solution(object):
    def longestConsecutive(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        
        if len(nums) <= 1:
          return len(nums)

        map = dict()
        ret_max = 0
        for num in nums:
          if map.has_key(num) != True:
            # 表示默认值 0
            left = map.get(num-1, 0)
            right = map.get(num+1, 0)
            new_len = left+right+1
            # 只更新三个位置, 就是可能的边界条件
            map[num] =  new_len
            map[num-left] = new_len
            map[num+right] = new_len
            
            ret_max = max(ret_max, new_len)
          
        return ret_max
        
