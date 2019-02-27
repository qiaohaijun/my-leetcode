class Solution(object):
    def minDistance(self, word1, word2):
        """
        :type word1: str
        :type word2: str
        :rtype: int
        """
        # word1 = A
        # word2 = B
        len_w1 = len(word1)
        len_w2 = len(word2)
        
        opt = [[0]*(len_w1+1) for i in range(len_w2+1)]
        
        # bound condition
        for i1 in range(len_w1+1):
            opt[0][i1] = i1
        for i2 in range(len_w2+1):
            opt[i2][0] = i2
            
        # dp 
        
        for i1 in range(1,len_w1+1):
            for i2 in range(1, len_w2+1):
                insertion = opt[i2-1][i1]+1
                deletion = opt[i2][i1-1]+1
                if word1[i1-1] == word2[i2-1]:
                    replace = opt[i2-1][i1-1]
                else:
                    replace = opt[i2-1][i1-1]+1
                opt[i2][i1] = min(insertion, deletion,replace)
        
        return opt[len_w2][len_w1]
