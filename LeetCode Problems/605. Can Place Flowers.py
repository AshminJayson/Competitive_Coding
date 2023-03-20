class Solution:
    def canPlaceFlowers(self, flowerbed: List[int], n: int) -> bool:


        count = 0

        for l in range(len(flowerbed)):

            if flowerbed[l] == 0:

                if l > 0 and flowerbed[l - 1] == 1:
                    continue
                if l < len(flowerbed) - 1 and flowerbed[l + 1] == 1:
                    continue

                count += 1
                flowerbed[l] = 1 

        return count >= n
