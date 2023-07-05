class Solution:
    def myAtoi(self, s: str) -> int:

        s = s.strip()
        res = 0

        i = 0
        sign = 1
        if i < len(s) and (s[0] == '+' or s[0] == '-'):
            if s[0] == '-':
                sign = -1
            i += 1
        
        string = '1234567890'

        while i < len(s):
            if s[i] not in [*string]:
                break

            res *= 10
            res += int(s[i])

            i += 1

        if res > 2 ** 31 - 1 and sign == 1: res = 2 ** 31 - 1
        if res > 2 ** 31 and sign == -1: res = 2 ** 31

        return res * sign