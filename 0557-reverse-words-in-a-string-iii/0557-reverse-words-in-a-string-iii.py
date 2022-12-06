class Solution:
    def reverseWords(self, s: str) -> str:
        w = s.split(' ')
        wr = w
        for x in range(len(w)):
            s = ''
            for y in range(len(w[x])):
                s += w[x][len(w[x]) - y - 1]
            wr[x] = s
        return ' '.join(wr)
                
        