class Solution:
    def insert(self, intervals: list[list[int]], newInterval: list[int]) -> List[List[int]]:

        def recur(i, newInterval):
            start, end = newInterval

            if i == len(intervals):
                return [newInterval]

            if start < intervals[i][0]:
                if end < intervals[i][0]:
                    return [newInterval] + intervals[i:]
                elif end <= intervals[i][1]:
                    newInterval[1] = intervals[i][1]
                    return [newInterval] + intervals[i+1:]
                else:
                    return recur(i+1, newInterval)
            else:
                if start > intervals[i][1]:
                    return [intervals[i]] + recur(i+1, newInterval)
                elif end <= intervals[i][1]:
                    return intervals[i:]
                else:
                    newInterval[0] = intervals[i][0]
                    return recur(i+1, newInterval)

        return recur(0, newInterval)

            