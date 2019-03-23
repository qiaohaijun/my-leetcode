class Solution(object):
    def isPalindrome(self, s):
        """
        :type s: str
        :rtype: bool
        """
        s = s.lower()
        l = 0
        r = len(s)-1
        
        while l<r:
            ## 不同的判断条件不要混合在一起
            if s[l].isalnum() == False:
                l+=1
                continue
                
            if s[r].isalnum() == False:
                r-=1
                continue
                
            if s[l]==s[r]:
                l+=1
                r-=1
            else:
                return False
                
        return True
                
        
