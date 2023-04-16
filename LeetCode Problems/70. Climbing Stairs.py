class Solution:
    def climbStairs(self, n: int) -> int:
        
        if n == 1:
            return 1
        
        last = 1
        prevlst = 2
        temp = 2

        for i in range(n - 3, -1, -1):
            temp = last + prevlst
            last, prevlst = prevlst, temp

        return temp
        