class Solution:
    def maxProfit(self, prices: list[int]) -> int:

        dp = {}

        def dfs(i, bs):
            if i >= len(prices):
                return 0
            if (i, bs) in dp:
                return dp[(i, bs)]

            cooldown = dfs(i + 1, bs)

            if bs:
                profit = dfs(i + 1, False) - prices[i]
                dp[(i, bs)] = max(profit, cooldown)
            else:
                profit = dfs(i + 2, True) + prices[i]
                dp[(i, bs)] = max(profit, cooldown)
            return dp[(i, bs)]

        return dfs(0, True)