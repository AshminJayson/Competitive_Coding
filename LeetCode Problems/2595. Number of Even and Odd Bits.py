class Solution:
    def evenOddBit(self, n: int) -> list[int]:

        val = bin(n)[2:]
        print(val)

        ls = [0, 0]
        count = 0
        for i in range(len(val) - 1, -1, -1):
            if val[i] == '1':
                if count & 1:
                    ls[1] += 1
                else:
                    ls[0] += 1
            count += 1

        return ls