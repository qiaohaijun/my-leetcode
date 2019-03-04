class Solution(object):
    def minCostClimbingStairs(self, cost):
        """
        :type cost: List[int]
        :rtype: int
        """
        opt = [0]*(len(cost)+1)
        
        # 跳到第一个台阶和第二个台阶cost=0
        opt[0] = 0
        opt[1] = 0
        
        for i in range(2,len(cost)+1):
            opt[i]=min(opt[i-1]+cost[i-1],opt[i-2]+cost[i-2])
        
        return opt[-1]
