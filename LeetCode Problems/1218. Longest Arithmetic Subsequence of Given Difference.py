class Solution:
    def longestSubsequence(self, arr: list[int], difference: int) -> int:

        # Naive backtracking implementation : TLE 33/39
        # BT with top down recursion : MLE 33/39

        # if len(arr) == 1: return 1

        # dp = {}
        # def bt(arr, i, prev):
        #     if i == len(arr):
        #         return 0
        #     if (i, prev) in dp: return dp[(i, prev)]

        #     select = 0
        #     if prev == -1 or arr[i] - arr[prev] == difference:
        #         select = bt(arr, i + 1, i) + 1

        #     dp[(i, prev)] =  max(select, bt(arr, i + 1, prev))
        #     return dp[(i, prev)]
            
        # return bt(arr, 0, -1)

        #len(arr) ~ 10^5 => The max TC = [O(nlogn), O(n^2)] 
        
        #Working out Bottom Up DP

        dp = {}
        maxm = -1
        for item in arr:
            if item - difference in dp:
                dp[item] = 1 + dp[item - difference]
            else: dp[item] = 1  
            maxm = max(maxm, dp[item])

        return maxm




        

        