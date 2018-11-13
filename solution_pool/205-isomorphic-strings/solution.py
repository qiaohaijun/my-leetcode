class Solution(object):
    def isIsomorphic(self, s, t):
        """
        :type s: str
        :type t: str
        :rtype: bool
        """
        if len(s) != len(t):
          return False
        if len(set(s))!=len(set(t)):
          return False
        
        table = dict()
        for i,x in enumerate(s):
          if x in table:
            if table[x] !=t[i]:
              return False
          else:
            table[x]=t[i]
            
        return True
          
