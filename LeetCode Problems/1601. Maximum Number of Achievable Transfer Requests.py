class Solution:
    def maximumRequests(self, n: int, requests: list[list[int]]) -> int:

        def dp(i, ar, rc):
            if i == len(requests):
                if max(ar) == 0:
                    return rc
                else:
                    return 0

            temp = ar.copy()
            frm, to = requests[i]
            temp[frm] -=1
            temp[to] +=1 

            return max(dp(i+1, temp, rc + 1), dp(i+1, ar, rc))

        return dp(0, [0] * n, 0)