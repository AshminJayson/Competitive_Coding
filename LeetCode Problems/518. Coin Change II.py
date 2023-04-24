class Solution:
    def change(self, amount: int, coins: list[int]) -> int:

        # dp = {}
        # if amount == 0:
        #     return 1

        # def dfs(amt, cc):

        #     if amt == amount:
        #         return 1
        #     if amt >= amount:
        #         return 0

        #     if (amt, cc) in dp:
        #         return dp[(amt, cc)]

        #     for c in coins:
        #         if c >= cc:
        #             dp[amt + c] = dp.get(amt + c, 0) + dfs(amt + c, c)

        #     dp[(amt, cc)] = 
        #     return dp[amt] if amt in dp else 0

        # dfs(0, 0)


        # return dp[amount] if amount in dp else 0

        dp = {}

        def dfs(i, amt):
            if amt == amount:
                return 1
            if amt > amount or i == len(coins):
                return 0
            
            if (i, amt) in dp:
                return dp[(i, amt)]

            dp[(i, amt)] = dfs(i, amt + coins[i]) + dfs(i + 1, amt)

            return dp[(i, amt)]

        return dfs(0, 0)