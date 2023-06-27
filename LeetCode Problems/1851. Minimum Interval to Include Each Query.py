from heapq import heapify, heappush, heappop

class Solution:
    def minInterval(self, intervals: list[list[int]], queries: list[int]) -> list[int]:

        res = [-1] * len(queries)
        intervals.sort()
        qs = [(queries[i], i) for i in range(len(queries))]
        i = 0
        hp = []

        for item, index in sorted(qs):
            while i < len(intervals) and intervals[i][0] <= item:
                heappush(hp, (intervals[i][1] - intervals[i][0] + 1, intervals[i][1]))
                i += 1

            while hp and hp[0][1] < item:
                heappop(hp)

            if hp: res[index] = hp[0][0]

        return res
