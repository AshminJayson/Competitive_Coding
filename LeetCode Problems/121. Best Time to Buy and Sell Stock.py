class Solution:
    def maxProfit(self, prices: list[int]) -> int:
        l, r = 0, 0
        maxProfit = 0

        while r < len(prices) - 1:
            r += 1

            maxProfit = max(maxProfit, prices[r] - prices[l])
            if prices[r] < prices[l]:
                l = r

        return maxProfit

ob = Solution()
print(ob.maxProfit([7,1,5,3,6,4]))
print(ob.maxProfit([7,6,4,3,1]))