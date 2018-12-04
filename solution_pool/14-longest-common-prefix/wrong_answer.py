class Solution(object):
    def longestCommonPrefix(self, strs):
        """
        :type strs: List[str]
        :rtype: str
        """
        if len(strs) == 1:
          return len(strs)
        
        ret_list = []
        min_len = 100000
        
        for m_str in strs:
          min_len = min(len(m_str), min_len)
        max_same_len = 0
        for i in range(min_len):
          for m_str in strs:
            base = strs[0][i]
            if m_str[i] != base:
              max_same_len = i-1      
              break 
              
        print max_same_len
        for i in range(max_same_len):
          print i
          ret_list.append(strs[0][i])
          
        
        
        return ''.join(ret_list)
