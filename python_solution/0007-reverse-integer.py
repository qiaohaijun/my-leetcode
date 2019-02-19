class Solution(object):
    def reverse(self, x):
        """
        :type x: int
        :rtype: int
        """

        is_negative = False
        if x<0:
          is_negative = True
          x = x*-1
        num = 0
        
        
        while x!=0:
          num = x%10 + num*10
          x=x/10
          
        if num > pow(2,31)-1 or num < -1*pow(2,31):
          return 0
        if is_negative == True:
          return -1*num
        else:
          return num
