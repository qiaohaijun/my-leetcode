class Solution(object):
    def jump(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        # 这些值是为了初始化
        # 那么为什么set 0
        # 因为刚开始的时候, 位于 nums[0]
        r = 0
        l = 0
        nr = 0
        step = 0
        
        for i in range(0,len(nums)):
            if nr>=len(nums)-1:
                break
            step+=1
            # 扩大范围, 找到 step i 的范围
            for i in range(l,r+1):
                nr = max(nr,nums[i]+i)
            # 设置下一个step 的范围
            l = r+1
            r = nr
            
            
        return step
