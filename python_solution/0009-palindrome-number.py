class Solution(object):
    def isPalindrome(self, x):
        """
        :type x: int
        :rtype: bool
        """
        if x<0:
            return False
        s1 = str(x)
        
        if len(s1) ==1:
            return True
        l = 0
        r = len(s1)-1
        
        # 可以相等 l==r
        while l<r:
            if s1[l] != s1[r]:
                return False
            else:
                l = l+1
                r = r-1
        
        return True
            
