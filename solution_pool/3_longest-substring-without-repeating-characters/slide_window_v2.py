class Solution(object):
    def lengthOfLongestSubstring(self, s):
        """
        :type s: str
        :rtype: int
        """
        # guard
        if len(s) < 2:
          return len(s)
        table = dict()
        
        slow_idx = 0
        fast_idx = 0
        ret_max = 0
        
        while slow_idx<len(s) and fast_idx<len(s):
          # find dup, slide window
          if s[fast_idx] in table :
            #slow_idx = max(table[s[fast_idx]],slow_idx)
            del(table[s[slow_idx]])
            slow_idx+=1
            #table[s[fast]] = slow
          else:
            table[s[fast_idx]] = fast_idx
            fast_idx+=1
            ret_max = max(ret_max,fast_idx-slow_idx)
            
        return ret_max
