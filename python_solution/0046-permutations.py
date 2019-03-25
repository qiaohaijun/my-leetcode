class Solution(object):
    def dfs(self,nums,mark,cur,res):
        if sum(mark) == len(nums):
            # 注意这里的写法,如果cur会出现空结果
            res.append(cur[:])
            return
        
        for i in range(len(nums)):
            if mark[i] == False:
                mark[i] = True
                cur.append(nums[i])
                self.dfs(nums, mark,cur,res)
                cur.pop()
                mark[i] = False
    
    def permute(self, nums):
        """
        :type nums: List[int]
        :rtype: List[List[int]]
        """
        res=[]
        mark = [False]*len(nums)
        
        cur = []
        self.dfs(nums,mark,cur,res)
        return res
