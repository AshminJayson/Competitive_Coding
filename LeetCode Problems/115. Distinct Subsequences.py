class Solution:
    def numDistinct(self, s: str, t: str) -> int:

        dp = {}

        def dfs(i, ci):
            
            if ci >= len(t):
                return 1
            
            if i >= len(s):
                return 0

            if (i, ci) in dp:
                return dp[(i, ci)]

            dp[(i, ci)] = dfs(i+1, ci)

            if s[i] == t[ci]:
                dp[(i, ci)] += dfs(i+1, ci+1)
                

            return dp[(i, ci)]

        return dfs(0, 0)