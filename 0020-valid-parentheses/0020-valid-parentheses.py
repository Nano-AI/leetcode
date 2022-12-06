class Solution:
    def isValid(self, s: str) -> bool:
        st = s
        while "{}" in st or "[]" in st or "()" in st:
            st = st.replace("{}", "").replace("[]", "").replace("()", "")
        return True if len(st) == 0 else False
