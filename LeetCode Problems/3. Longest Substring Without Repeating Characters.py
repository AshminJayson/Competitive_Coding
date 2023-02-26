class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        max_l = 0

        # l, r = 0, 0
        # hashset = set()

        # while r < len(s):


        #     if s[r] in hashset:
        #         while s[l] != s[r] and l < r:
        #             hashset.remove(s[l])                   
        #             l += 1
        #         if s[l] == s[r] and l != r:
        #             l += 1
        #     else:
        #         hashset.add(s[r])

        #     # print(l, r)
        #     max_l = max(max_l, len(hashset))
        #     r += 1

        # max_l = max(max_l, len(hashset))


        # Faster, better and more efficient : Let's store the indices

        l = 0
        hashdict = {}

        for r in range(len(s)):
            if s[r] in hashdict:
                l = max(hashdict[s[r]], l)

            max_l = max(max_l, r - l + 1)
            hashdict[s[r]] = r + 1
        return max_l


ob = Solution()
print(ob.lengthOfLongestSubstring('abcabcbb'))
print(ob.lengthOfLongestSubstring('bbbbb'))
print(ob.lengthOfLongestSubstring('abcdef'))
print(ob.lengthOfLongestSubstring("dvdf"))
print(ob.lengthOfLongestSubstring("pwwkew"))