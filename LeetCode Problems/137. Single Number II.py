class Solution:
    def singleNumber(self, nums: List[int]) -> int:
        
        ones, twos = 0, 0

        # Each operation shifts the value of the ones and two variable to store the current
        # element being repeated ones or twice or done.
        for i in nums:
            ones = (ones ^ i) & ~twos
            twos = (twos ^ i) & ~ones

        return ones