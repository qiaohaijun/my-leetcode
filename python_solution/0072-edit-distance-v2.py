class Solution(object):
    def minDistance(self, word1, word2):
        """
        :type word1: str
        :type word2: str
        :rtype: int
        """
        len1 = len(word1)
        len2 = len(word2)
        
        matrix = [[0]*(len2+1) for i in range(0,len1+1)]
        
        for i in range(0,len1+1):
            matrix[i][0] = i
        for j in range(0,len2+1):
            matrix[0][j] = j
            
        for i in range(1,len1+1):
            for j in range(1,len2+1):
                if word1[i-1] == word2[j-1]:
                    matrix[i][j] = matrix[i-1][j-1]
                else:
                    insertion = matrix[i-1][j]+1
                    deletion = matrix[i][j-1]+1
                    substitution = matrix[i-1][j-1]+1
                    
                    matrix[i][j] = min(insertion, deletion,substitution)
                    
        return matrix[len1][len2]
