class Solution(object):
    table = {}
    table[0]=1
    table[1]=1
    table[2]=2
    def dfs(self,n):
        if n < 0:
          return 0
        if self.table.has_key(n):
          return self.table[n]
        else:
          my_ret=self.dfs(n-1)+self.dfs(n-2)
          self.table[n]=my_ret
          return my_ret
          
    def climbStairs(self, n):
        """
        :type n: int
        :rtype: int
        """
        return self.dfs(n-1)+self.dfs(n-2)
