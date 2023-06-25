class Solution:
    def checkValidString(self, s: str) -> bool:
        op, star = [], []

        for i in range(len(s)):
            if s[i] == '(':
                op.append(i)
            elif s[i] == ')':
                if op: op.pop()
                elif star: star.pop()
                else: return False
            else:
                star.append(i)

        for i in op[::-1]:
            if not star: return False
            elif star and star[-1] < i: return False
            else: star.pop()

        return True