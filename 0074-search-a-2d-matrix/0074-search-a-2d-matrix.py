class Solution:
    def searchMatrix(self, matrix: List[List[int]], target: int) -> bool:
        for x in matrix:
            if x[0] <= target and x[len(x) - 1] >= target:
                for n in x:
                    if n == target:
                        return True
            else:
                continue