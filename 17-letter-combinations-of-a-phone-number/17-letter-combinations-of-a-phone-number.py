class Solution:
    options = {
        "2": "abc",
        "3": "def",
        "4": "ghi",
        "5": "jkl",
        "6": "mno",
        "7": "pqrs",
        "8": "tuv",
        "9": "wxyz"
    }

    def letterCombinations(self, digits: str) -> List[str]:
        if not digits:
            return []
        self.output = []
        self.rec(digits, '')
        return self.output
        
    
    def rec(self, digits, value):
        if not digits:
            self.output.append(value)
            return 0
        letters = self.options[digits[0]]
        for letter in letters:
            self.rec(digits[1:], value + letter)
        
