class Solution:
    def longestPalindrome(self, s: str) -> str:


        # Optimal Solution

        ml = 0
        res = 0

        for i in range(len(s)):
            l, r = i, i

            while l >= 0 and r < len(s) and s[l] == s[r]:
                if r - l + 1 > ml:
                    ml = r - l + 1
                    res = s[l:r+1]

                l -= 1
                r += 1

            l, r = i, i + 1
            
            while l >= 0 and r < len(s) and s[l] == s[r]:
                if r - l + 1 > ml:
                    ml = r - l + 1
                    res = s[l:r+1]

                l -= 1
                r += 1

        return res

        # memo = {}
        # ml = 0
        # st = ""

        # def checkPalindrome(i, j):

        #     if (i, j) in memo:
        #         return memo[(i, j)]

        #     u, v = i, j
        #     while u < v:

        #         if s[u] != s[v]:
        #             memo[(i, j)] = False
        #             return False

        #         u += 1
        #         v -= 1

        #     memo[(i, j)] = True
        #     return True

        # for i in range(len(s)):
        #     for j in range(i, len(s)):

        #         if checkPalindrome(i, j):
        #             if j - i + 1 > ml:
        #                 ml = j - i + 1
        #                 st = s[i:j+1]

        # return st

        

