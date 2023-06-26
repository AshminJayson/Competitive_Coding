class Solution:
    def eraseOverlapIntervals(self, intervals: list[list[int]]) -> int:

        intervals.sort()
        end = intervals[0][1]
        count = 0

        for i in range(1, len(intervals)):
            if end <= intervals[i][0]:
                end = intervals[i][1]
                continue
            else:
                count += 1
                end = min(end, intervals[i][1])

        return count