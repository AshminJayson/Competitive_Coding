#Binary Search Based Approach


class MedianFinder:

    def __init__(self):
        self.stream = []
        

    def addNum(self, num: int) -> None:
        
        lo = 0
        hi = len(self.stream) - 1

        while lo <= hi:

            mid = (lo + hi) // 2

            if num > self.stream[mid]:
                lo = mid + 1
            elif num <= self.stream[mid]:
                hi = mid - 1


        self.stream.insert(lo, num)
        # print(self.stream)

    def findMedian(self) -> float:
        n = len(self.stream)
        if n % 2 == 0:
            return (self.stream[(n // 2) - 1] + self.stream[n // 2]) / 2
        else:
            return self.stream[n // 2]
        


# Your MedianFinder object will be instantiated and called as such:
# obj = MedianFinder()
# obj.addNum(num)
# param_2 = obj.findMedian()


#Heap Based Approach

from heapq import heappop, heappush

class MedianFinder:

    def __init__(self):
        self.sm = []
        self.bm = []
        self.n = 0
        

    def addNum(self, num: int) -> None:
        self.n += 1

        if len(self.sm) == len(self.bm):
            if self.sm and -self.sm[0] >= num:
                heappush(self.sm, -num)
            else:
                heappush(self.bm, num)
        elif len(self.sm) > len(self.bm):
            if self.sm and -self.sm[0] >= num:
                x = heappop(self.sm)
                heappush(self.sm, -num)
                heappush(self.bm, -x)
            else:
                heappush(self.bm, num)
        else:
            if self.bm and self.bm[0] < num:
                x = heappop(self.bm)
                heappush(self.bm, num)
                heappush(self.sm, -x)
            else:
                heappush(self.sm, -num)

        # print(self.sm, self.bm)

    def findMedian(self) -> float:
        if self.n % 2 == 0:
            return (-self.sm[0] + self.bm[0]) / 2
        else:
            if len(self.sm) > len(self.bm):
                return -self.sm[0]
            else:
                return self.bm[0]


# Your MedianFinder object will be instantiated and called as such:
# obj = MedianFinder()
# obj.addNum(num)
# param_2 = obj.findMedian()