class Solution:
    def mergeAlternately(self, word1: str, word2: str) -> str:
        i1 = 0
        i2 = 0
        
        l1 = len(word1)
        l2 = len(word2)
        
        o = ""
        
        while i1 < l1 or i2 < l2:
            if i1 < l1:
                o += word1[i1]
                i1 += 1
            if i2 < l2:
                o += word2[i2]
                i2 += 1
        
        return o