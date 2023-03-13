import heapq as hp

class Solution:
    def lastStoneWeight(self, stones: List[int]) -> int:
        hq = [-1 * x for x in stones]
        hp.heapify(hq)
        # print(hq)

        while len(hq) > 1:
            st1 = -1 * hp.heappop(hq)
            st2 = -1 * hp.heappop(hq)

            if st1 > st2:
                st1 = st1 - st2

                hp.heappush(hq, -1 * st1)
            elif st2 > st1:
                st2 = st2 - st1
            
                hp.heappush(hq, -1 * st2)



        return -1 * hq[0] if hq else 0