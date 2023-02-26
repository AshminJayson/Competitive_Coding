class Solution:
    def findMedianSortedArrays(self, nums1: list[int], nums2: list[int]) -> float:
        
        a, b = nums1, nums2
        a.insert(0, float('-inf'))
        b.insert(0, float('-inf'))
        a.append(float('inf'))
        b.append(float('inf'))

        if len(a) < len(b):
            a, b = b, a


        tl = len(nums1) + len(nums2) - 4
        lo = 0
        hi = len(b) - 1

        while lo <= hi:

            mid = (lo + hi) // 2
            rest = (tl // 2)  - mid
            # print(tl, mid, rest, 'lohi', lo, hi)

            tca = a[rest + 1]
            tcb = b[mid + 1]

            # print('tcab', a[rest], tca, b[mid], tcb)

            if b[mid] <= tca and a[rest] <= tcb:
                if tl % 2 == 0:
                    return (max(b[mid], a[rest]) + min(tcb, tca)) / 2
                else:
                    return min(tca, tcb)
            elif b[mid] > tca:
                hi = mid - 1
            else:
                lo = mid + 1




ob = Solution()
print(ob.findMedianSortedArrays([1,3], [2]))
print(ob.findMedianSortedArrays([1,2], [3,4]))
print(ob.findMedianSortedArrays([1,2,2,3,4], [3,4]))
print(ob.findMedianSortedArrays([1,2,4], [3,5,6]))
print(ob.findMedianSortedArrays([], [1,2,3,4,5]))
