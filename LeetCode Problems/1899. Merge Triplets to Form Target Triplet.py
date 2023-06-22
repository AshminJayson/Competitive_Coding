class Solution:
    def mergeTriplets(self, triplets: list[list[int]], target: list[int]) -> bool:

        x, y, z = False, False, False
        a, b, c = target

        for i, j, k in triplets:

            if i <= a and j <= b and k <= c:
                if i == a: x = True
                if j == b: y = True
                if k == c: z = True


        return x and y and z