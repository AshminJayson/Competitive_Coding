class Solution:
    def divisibilityArray(self, word: str, m: int) -> list[int]:

        ar = [0] * len(word)
        s = 0

        for i in range(len(word)):
            s *= 10
            s += int(word[i])
            s = s % m
            if s == 0:
                ar[i] = 1 
        

        return ar


ob = Solution()
print(ob.divisibilityArray("998244353", 3))
print(ob.divisibilityArray("1010", 10))

        