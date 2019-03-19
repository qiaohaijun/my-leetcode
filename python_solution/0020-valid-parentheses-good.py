class Solution:
    def isValid(self, s):

        # map = dict()
        # map['}'] = '{'
        # map[']'] = '['
        # map[')'] = '('
        map = {')':'(',']':'[','}':'{'}
        stack = [' ']

        for c in s:

            c2 = map.get(c, '')
            if stack[-1] == c2:
                stack.pop()
            elif c2:
                return False
            else:
                stack.append(c)

        return len(stack) == 1
