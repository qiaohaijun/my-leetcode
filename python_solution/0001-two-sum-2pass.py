class Solution(object):
    def twoSum(self, nums, target):
        """
        :type nums: List[int]
        :type target: int
        :rtype: List[int]
        """
        
        ret = []
        
        table = dict()
        
        # 2 pass 解法
        
        # 第1遍 pass
        # 初始化 table
        for i,num in enumerate(nums):
            table[num] = i
        
        # 第二遍 pass
        # 查找 
        for i, num in enumerate(nums):
            wanted_num = target - num
            # i< table[wanted_num]
            # 作用如下
            # 避免重复数据重复使用
            # 避免交换位置构成新的结果
            # 可不可以反过来, i>table[wanted_num],这个和初始化有关.
            
            if table.has_key(wanted_num) and i < table[wanted_num]:
                ret.append(i)
                ret.append(table[wanted_num])
            
        return ret
        
