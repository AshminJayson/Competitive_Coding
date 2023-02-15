from collections import Counter
class Solution:
    def checkInclusion(self, s1: str, s2: str) -> bool:
        l = 0
        r = len(s1) - 1

        s1Count = Counter(s1)
        s2Count = Counter(s2[l:r])

        while r < len(s2):
            s2Count[s2[r]] = s2Count.get(s2[r], 0) + 1

            print(s1Count, s2Count)

            if all(s1Count[i] == s2Count.get(i, 0) for i in s1Count):
                print(l, r)
                return True

            r += 1
            s2Count[s2[l]] -= 1
            l += 1


        return False

ob = Solution()
print(ob.checkInclusion("ab", "eidbaooo"))
print(ob.checkInclusion("ab", "eidboaoo"))