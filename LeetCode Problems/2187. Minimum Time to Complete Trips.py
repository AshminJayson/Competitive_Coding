class Solution:
    def minimumTime(self, time: List[int], totalTrips: int) -> int:

        mxt = min(time) * totalTrips

        lo, hi = 1, mxt

        while lo < hi:

            mid = (lo + hi) // 2
            # print(mid, lo, hi)

            tt = 0
            for i in time:
                tt += mid // i
            

            if tt >= totalTrips:
                hi = mid
            else:
                lo = mid + 1


        return lo

  