import sys

class Solution(object):
    def increasingTriplet(self, nums):
        """
        :type nums: List[int]
        :rtype: bool
        """
        
        # 使用sys.maxint 要比自己的0x3f3f3f好
        # 如果自己用 0x3f3f3f 来表示`INF`就OK了
        p_f1 = sys.maxint
        p_f2 = sys.maxint
        
        for n in nums:
          if n > p_f2:
            return True
          
          if n <= p_f1:
            p_f1 = n
          else:
            p_f2 = n
        return False
