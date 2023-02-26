class Solution:
    def twoSum(self, numbers: list[int], target: int) -> list[int]:
        i = 0
        j = len(numbers) - 1

        while numbers[i] + numbers[j] != target:
            if numbers[i] + numbers[j] < target:
                i+=1
            else:
                j-=1
        return [i+1, j+1]


ob = Solution()
print(ob.twoSum([2,7,11,15], 9))