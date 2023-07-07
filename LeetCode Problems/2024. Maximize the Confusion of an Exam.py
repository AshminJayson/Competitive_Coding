class Solution:
    def maxConsecutiveAnswers(self, answerKey: str, k: int) -> int:

        # Sliding Window Approach
        l, r = -1, 0
        tcount, fcount = 0, 0
        mlen = -1

        while r < len(answerKey):

            if answerKey[r] == 'T': tcount += 1
            else: fcount += 1

            while l <= r and min(tcount, fcount) > k:
                l += 1
                if answerKey[l] == 'T': tcount -= 1
                else: fcount -= 1

            mlen = max(mlen, r - l)
            r += 1

        return mlen



