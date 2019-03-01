class Solution(object):
    def twoSum(self, nums, target):
        """
        :type nums: List[int]
        :type target: int
        :rtype: List[int]
        """
        table = dict()
        ret_list=[]
        
        for i, num in enumerate(nums):
            table[num] = i
        
        for i, num in enumerate(nums):
            need_num = target -num
            if table.has_key(need_num) == True and i<table[need_num]:
                ret_list.append(table[need_num])
                ret_list.append(i)
        return ret_list
