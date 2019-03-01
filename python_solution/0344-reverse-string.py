class Solution(object):
    def reverseString(self, s):
        """
        :type s: List[str]
        :rtype: None Do not return anything, modify s in-place instead.
        """
        s_len = len(s)
        end = s_len -1
        head = 0
        
        while head <end:
          tmp = s[head]
          s[head] = s[end]
          s[end] = tmp
          head = head + 1
          end = end -1
          
