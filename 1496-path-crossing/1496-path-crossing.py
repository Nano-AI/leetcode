class Solution:
    def isPathCrossing(self, path: str) -> bool:
        points = [(0, 0)]
        x, y = 0, 0
        for c in path:
            if c == "N":
                y += 1
            if c == "E":
                x += 1
            if c == "S":
                y -= 1
            if c == "W":
                x -= 1
            if (x, y) in points:
                return True
            points.append((x, y))
        return False
            
        