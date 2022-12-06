class Solution:
    def longestCommonPrefix(self, strs: List[str]) -> str:
        if len(strs) == 0:
            return ""
        p = strs[0]
        for x in range(len(strs)):
            while strs[x].find(p) != 0:
                p = p[:(len(p) - 1)]
                if p == "":
                    return ""
        return p