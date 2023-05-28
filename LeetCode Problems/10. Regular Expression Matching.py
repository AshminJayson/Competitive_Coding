class Solution:

    def isMatch(self, s: str, p: str) -> bool:

        dp = {}
        def dfs(i, j):
            
            if (i, j) in dp:
                return dp[(i, j)]

            if i == len(s):
                if j == len(p):
                    return True
                else:
                    if p[j] == '*' or (j < len(p) - 1 and p[j+1] == '*'):
                        return dfs(i, j+1)
                    else:
                        return False
            else:
                if j == len(p):
                    return False
            
            x, y, z = False, False, False

            if p[j] == s[i] or p[j] == '.':
                y = dfs(i+1, j+1)

            if j < len(p)-1 and p[j+1] == '*':
                z = dfs(i, j+1)
            
            if p[j] == '*':
                if p[j-1] == s[i] or p[j-1] == '.':
                    x = dfs(i+1, j+1) or dfs(i+1, j)

                x = dfs(i, j+1) or x
            
            dp[(i, j)] =  x or y or z
            return dp[(i, j)]
                
        return dfs(0, 0)