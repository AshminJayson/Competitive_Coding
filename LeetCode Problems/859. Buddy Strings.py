class Solution:
    def buddyStrings(self, s: str, goal: str) -> bool:

        ar = []

        if len(s) != len(goal): return False
        dp = {}
        mx = 0

        for i in range(len(s)):
            dp[s[i]] = dp.get(s[i], 0) + 1
            mx = max(mx, dp[s[i]])

            if s[i] != goal[i]:
                ar.append(i)
        
        print(mx)
        if len(ar) != 2:
            if len(ar) == 0 and mx > 1: return True
            else: return False

        if s[ar[1]] == goal[ar[0]] and s[ar[0]] == goal[ar[1]]: return True
        else: return False 
