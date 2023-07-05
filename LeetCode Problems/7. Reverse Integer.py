class Solution:
    def reverse(self, x: int) -> int:

        flag = False
        if x < 0:
            flag = True
            x *= -1

        res = 0
        while x > 0:
            res *= 10
            res += x % 10
            x = x // 10

        if res > 2 ** 31:
            return 0

        return res if not flag else -res