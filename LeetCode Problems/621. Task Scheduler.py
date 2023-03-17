from collections import Counter
from heapq import heapify, heappush, heappop

class Solution:
    def leastInterval(self, tasks: List[str], n: int) -> int:

        time = 0
        d = Counter(tasks)
        
        uq = [-d[k] for k in d]        
        heapify(uq)
        x = []

        while uq or x:

            time += 1
            # print(time, uq, x)

            if not uq:
                time = x[0][1]
            else:
                item = 1 + heappop(uq)
                if item != 0:
                    x.append([item, time + n])

            if x and x[0][1] == time:
                heappush(uq, x.pop(0)[0])
                
        return time