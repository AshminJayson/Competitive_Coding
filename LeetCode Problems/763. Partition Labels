class Solution:
    def partitionLabels(self, s: str) -> list[int]:

        hm = {}

        for i in range(len(s)):
            hm[s[i]] = i

        maxdist = 0
        currdist = 0
        res = []
        for i in range(len(s)):
            if i > maxdist:
                res.append(currdist)
                maxdist = hm[s[i]]
                currdist = 1
            else:
                currdist += 1
                maxdist = max(maxdist, hm[s[i]])

        res.append(currdist)
        return res