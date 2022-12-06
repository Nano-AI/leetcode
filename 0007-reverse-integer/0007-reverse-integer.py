class Solution:
    def reverse(self, x: int) -> int:
        if x > 2147483647 or x < -2147483648:
            return 0
        
        out = 0
        iterate = abs(x)
        while iterate != 0:
            out *= 10
            out += iterate % 10
            iterate = floor(iterate / 10)
        if x < 0:
            out *= -1;
        
        if out > 2147483647 or out < -2147483648:
            return 0
        
        return out
        