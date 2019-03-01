class Solution(object):
          
    def climbStairs(self, n):
        """
        :type n: int
        :rtype: int
        """
        # bound condition
        if n == 1:
          return 1
        elif n == 2:
          return 2
        ret = [0]*(n+1)

        ret[1]=1
        ret[2]=2
        for i in range(3,n+1):
          ret[i]=ret[i-1]+ret[i-2]
        return ret[n]
