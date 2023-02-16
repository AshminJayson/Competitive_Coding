from collections import Counter

class Solution:
    def minWindow(self, s: str, t: str) -> str:

        # I need to fix my counting issues 😂
        tCount = Counter(t)
        l, r = 0, 0
        hashDict = {}        
        minWindowStr = ""
        for r in range(len(s)):
            hashDict[s[r]] = hashDict.get(s[r], 0) + 1

            while all(tCount[i] <= hashDict.get(i, 0) for i in tCount):
                # print(r,l,len(minWindowStr), hashDict)
                if r - l + 1 <= len(minWindowStr) or len(minWindowStr) == 0:
                    minWindowStr = s[l:r+1]

                hashDict[s[l]] -= 1
                l += 1

            # print(l, r, hashDict)

        # To optimize the solution consider string filter as only the contents of s in t and save it onto a list arr as (s[i], i), iterate upon this list
        # in the same method as before and find the minimum window as r ~ s[r] - l ~ s[l] 
        return minWindowStr

        
        



ob = Solution()
print(ob.minWindow("cabwefgewcwaefgcf", "cae"))
print(ob.minWindow("ADOBECODEBANC", "ABC"))
# print(ob.minWindow("a", "a"))
# print(ob.minWindow("a", "aa"))