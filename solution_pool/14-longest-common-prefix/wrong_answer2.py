class Solution(object):
    def longestCommonPrefix(self, strs):
        """
        :type strs: List[str]
        :rtype: str
        """
        if len(strs) <= 1:
          return len(strs)
        
        ret_list = []
        min_len = 100000
        
        for m_str in strs:
          min_len = min(len(m_str), min_len)
        max_same_len = 0
        
        stop_loop = False
        for i in range(min_len):
          if stop_loop == True:
            break
          for m_str in strs:
            base = strs[0][i]
            if m_str[i] != base:
              max_same_len = max(i-1,0)    
              print ("max_same_len %d" %(max_same_len))
              stop_loop = True
              break 
              
        print max_same_len
        for i in range(max_same_len+1):
          print i
          ret_list.append(strs[0][i])
          
        
        
        return ''.join(ret_list)
