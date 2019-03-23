class Solution(object):
    def increasingTriplet(self, nums):
        """
        :type nums: List[int]
        :rtype: bool
        """
        import sys
        
        big_num = sys.maxint
        small_num = sys.maxint
        
        for n in nums:
            # first layer logic
            if n>big_num:
                return True
            
            # 只要小于等于 small_num 就拦截
            if n <= small_num:
                small_num = n
            # 走到这一步,说明问题
            # 1. 比 small_num 大, 但是绝对小于 big_num
            # 2. 那么就更新 big_num, 这样不会遗漏三元序列
            else:
                big_num = n
        return False
