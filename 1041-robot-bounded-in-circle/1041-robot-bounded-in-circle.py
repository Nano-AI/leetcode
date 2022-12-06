class Solution:
    def isRobotBounded(self, instructions: str) -> bool:
        pos = [0, 0]
        d = [0, 1]
        dn = 0
        directions = [[0, 1], [1, 0], [0, -1], [-1, 0]]
        for i in instructions:
            if i == 'L':
                dn -= 90
            if i == 'R':
                dn += 90
            if dn == 360:
                dn = 0
                # d -= (d - (d % 360)) Didn't need to do such severe checking cause we can check after we add
            if dn == -90:
                dn = 270
            if i != 'G':
                continue
            d = directions[floor(dn / 90)]
            pos[0] += d[0]
            pos[1] += d[1]
            print(pos, d, dn, i)
        print(dn, pos)
        return dn != 0 or pos == [0, 0]
        