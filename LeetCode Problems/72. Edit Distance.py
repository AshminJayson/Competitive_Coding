class Solution:
    def minDistance(self, word1: str, word2: str) -> int:

        dp = {}
        def dfs(i, j):

            if i >= len(word1):
                return len(word2) - j

            if j >= len(word2):
                return len(word1) - i

            if (i, j) in dp:
                return dp[(i, j)]

            

            if word1[i] == word2[j]:
                dp[(i, j)] = dfs(i+1, j+1)
            else:
                ins = dfs(i, j+1)
                dele = dfs(i+1, j)
                rep = dfs(i+1, j+1)
                dp[(i, j)] = 1 + min(ins, dele, rep)

            return dp[(i, j)]

        return dfs(0, 0)