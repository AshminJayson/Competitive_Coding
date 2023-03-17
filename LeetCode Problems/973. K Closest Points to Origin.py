from heapq import heapify, heappop
class Solution:

    def kClosest(self, points: list[list[int]], k: int) -> list[list[int]]:

        def eucdist(x, y):
            return -1 * ((x ** 2 + y ** 2) ** 0.5)

        distances = [(eucdist(x[0], x[1]), x[0], x[1]) for x in points]
        
        heapify(distances)

        while len(distances) > k:
            heappop(distances)

        return [[x[1], x[2]] for x in distances]