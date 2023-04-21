class Solution:
    def wordBreak(self, s: str, wordDict: list[str]) -> bool:

        # Top down Approach with tabulation 

        # wordSet = set(wordDict)

        # dp = {}

        # def dfs(i, j):

        #     if (i, j) in dp:
        #         return dp[(i, j)]
            
        #     if i == len(s):
        #         return True
        #     if j == len(s) and i != j:
        #         return False


        #     flag = False
        #     if s[i:j+1] in wordSet:
        #         flag = dfs(j+1, j+1)
            
        #     dp[(i, j)] = dfs(i, j + 1) or flag
        #     return dp[(i, j)]    
            
        # return dfs(0, 0)


        #Bottom up with memoization

        dp = [False] * (len(s) + 1)

        dp[len(s)] = True

        for i in range(len(s) - 1, -1, -1):
            for w in wordDict:

                if (i + len(w)) <= len(s) and s[i:i+len(w)] == w:
                    dp[i] = dp[i + len(w)]
                
                if dp[i]:
                    break
        return dp[0]