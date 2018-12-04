class Solution(object):
    def longestCommonPrefix(self, strs):
        """
        :type strs: List[str]
        :rtype: str
        """
        ret=""
        if len(strs) == 0:
          return ret
        
        if len(strs) ==1:
          return strs[0]

        base = strs[0]     
        min_len=100000
        for m_str in strs:
          min_len = min(len(m_str),min_len)
          
        for i in range(min_len):
          for m_str in strs[1:]:
            if base[i]!=m_str[i]:
              return ret
          ret+=base[i]
        return ret
