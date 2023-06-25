class Solution:
    def merge(self, intervals: list[list[int]]) -> list[list[int]]:

        res = []
        intervals.sort()
        ci = intervals[0]

        for i in range(1, len(intervals)):
            if ci[1] < intervals[i][0]:
                res.append(ci)
                ci = intervals[i]
            else:
                ci = [
                    min(ci[0], intervals[i][0]),
                    max(ci[1], intervals[i][1])
                ]

        res.append(ci)

        return res