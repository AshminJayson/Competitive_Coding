class Solution:
    def canCompleteCircuit(self, gas: list[int], cost: list[int]) -> int:
        ss, cg, tg, tc = 0, 0, 0, 0
        for i in range(0, len(gas)):
            tg, tc = tg + gas[i], tc + cost[i]
            cg += gas[i]
            if cg < cost[i]:
                ss = i + 1
                cg = 0
            else:
                cg -= cost[i]
        
        return ss if tg >= tc else -1


