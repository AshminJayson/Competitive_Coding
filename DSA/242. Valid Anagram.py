class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        #using list would result in (n*2) tc during searching
        #sets wouldn't be able to hold the repeated letters
        #dictionary would require increments in value : Favorable Approach

        hashdic = {}
        for i in s:
            if i in hashdic:
                hashdic[i] += 1
            else:
                hashdic[i] = 1
        
        for i in t:
            print(hashdic)
            if i in hashdic:
                hashdic[i] -= 1
                if hashdic[i] == 0:
                    hashdic.pop(i)
            else:
                return False

        if len(hashdic) == 0:
            return True
        else:
            return False

        #The fastest solution was amazing

        return all(s.count(i) == t.count(i) for i in 'abcdefghijklmnopqrstuvwxyz')


# ob = Solution()
# print(ob.isAnagram('anagram', 'nagaram'))