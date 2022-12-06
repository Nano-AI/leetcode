class Solution:
    def isPalindrome(self, s: str) -> bool:
        return [ x == x[::-1] for x in [[i for i in s.lower() if i.isalnum()]]][0]
        