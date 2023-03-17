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

