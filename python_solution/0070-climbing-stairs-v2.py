class Solution(object):
  cache = dict()
  cache[0] = 0
  cache[1] = 1
  cache[2] = 2
  def dp(self,n):
    if self.cache.has_key(n):
      return self.cache[n]
    else:
      ret = self.dp(n-1)+ self.dp(n-2)
      self.cache[n] = ret 
      return ret
    
  def climbStairs(self, n):
    return self.dp(n)
        
          
