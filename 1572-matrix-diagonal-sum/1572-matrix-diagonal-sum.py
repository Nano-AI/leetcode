class Solution:
    def diagonalSum(self, mat: List[List[int]]) -> int:
        size = len(mat) - 1
        s = 0
        for x in range(size + 1):
            s += mat[x][x] + mat[size - x][x]
        return s - (mat[size // 2][size // 2] if size % 2 == 0 else 0)
        