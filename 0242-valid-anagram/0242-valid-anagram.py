class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        return False if ''.join(sorted(s)) != ''.join(sorted(t)) else True
