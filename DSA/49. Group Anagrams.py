class Solution:

    def hashTuple(self, s : str) -> bool:
        return tuple([s.count(x) for x in "abcdefghijklmnopqrstuvwxyz"])
    
    def groupAnagrams(self, strs: list[str]) -> list[list[str]]:
        #I can find if two strings are anagrams in O(n) tc
        #However taking all possible combinations would result in O(n^3) tc and isn't efficient
        #And I'm not really finding any other efficient solution in my head rn

        #Had to check the solutions for this one 🥹
        #Well I did learn a new hashing method so that's a +

        ht = {}

        for i in strs:
            code = self.hashTuple(i)
            if  code in ht:
                ht[code].append(i)
            else:
                ht[code] = [i]
        


        return ht.values()

ob = Solution()
print(ob.groupAnagrams(["eat","tea","tan","ate","nat","bat"]))
# print(ob.groupAnagrams(["a"]))