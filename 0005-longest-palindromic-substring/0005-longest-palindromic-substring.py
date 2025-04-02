class Solution:
    def longestPalindrome(self, s: str) -> str:
        if not s:
            return ""

        def expand(s, l, r):
            while l >= 0 and r < len(s) and s[l] == s[r]:
                l -= 1
                r += 1
            return r - l - 1
        start = 0
        end = 0
        for i in range(len(s)):
            odd = expand(s, i, i)
            even = expand(s, i, i + 1)
            m = max(odd, even)
            if m > end - start:
                start = i - (m - 1) // 2
                end = i + m // 2
        return s[start:end+1]
