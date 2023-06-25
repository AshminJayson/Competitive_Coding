class Solution:
    def insert(self, intervals: list[list[int]], newInterval: list[int]) -> list[list[int]]:

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

            
# Better solution 

class Solution:
    def insert(self, intervals: list[list[int]], newInterval: list[int]) -> list[list[int]]:

        res = []

        for i in range(len(intervals)):
            if newInterval[1] < intervals[i][0]:
                res.append(newInterval)
                return res + intervals[i:]
            elif newInterval[0] > intervals[i][1]:
                res.append(intervals[i])
            else:
                newInterval = [
                    min(newInterval[0], intervals[i][0]),
                    max(newInterval[1], intervals[i][1])
                ]
        
        res.append(newInterval)
        return res

            