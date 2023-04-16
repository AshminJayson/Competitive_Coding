class Solution:
    def minCostClimbingStairs(self, cost: list[int]) -> int:
        n = len(cost)
    
        last, prev = cost[n - 1], cost[n - 2]

        for i in range(n - 3, -1, -1):
            tc = cost[i] + min(prev, last)
            last, prev = prev, tc

        return min(prev, last)


        