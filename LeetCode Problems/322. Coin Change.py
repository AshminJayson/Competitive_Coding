import collections

class Solution:
    def coinChange(self, coins: list[int], amount: int) -> int:
        
        dp = collections.defaultdict(int)
        dp = {0 : 0}

        for i in range(1, amount + 1):
            for j in coins:

                req = i - j
                if req in dp:
                    dp[i] = min(dp[i], 1 + dp[req]) if i in dp else 1 + dp[req]

        return dp[amount] if amount in dp else -1

                


