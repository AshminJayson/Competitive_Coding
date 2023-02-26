class Solution:
    def generateParenthesis(self, n: int) -> list[str]:
        # I actually should start thinking along different lines

        ans = []
        def generator(s = [], l = 0, r = 0) :
            if len(s) == 2*n:
                ans.append("".join(s))
                return

            if l < n:
                s.append('(')
                generator(s, l + 1, r)
                s.pop()
            
            if r < l:
                s.append(')')
                generator(s, l, r + 1)
                s.pop()
        

        generator()
        return ans


ob = Solution()
print(ob.generateParenthesis(3))
print(ob.generateParenthesis(1))
