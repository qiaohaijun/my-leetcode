class Solution(object):
    def myAtoi(self, str):
        """
        :type str: str
        :rtype: int
        """
        # preprocess and guard 
        str=str.strip()
        if len(str) ==0:
          return 0
        
        num = 0
        is_negative = False
        
        # check '-' or '+'
        if str[0] == '-':
          is_negative = True
          str = str[1:]
        elif str[0] == '+':
          str = str[1:]
        if len(str) == 0:
          return 0
        
        # guard again
        if str[0].isdigit() == False:
          return 0
        
        for i, ch in enumerate(str):
          if ch.isdigit() == False:
            break
          num = int(ch) + num*10
          

        if is_negative == True:
          num = -1*num
        
        # check range
        if num > pow(2,31)-1:
          num = pow(2,31)-1
        if num < -1* pow(2,31):
          num = -1*pow(2,31)
        
        return num
        
