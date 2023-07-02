class Solution:
    def distributeCookies(self, cookies: list[int], k: int) -> int:

        mn = float('inf')
        dist = [0] * k

        def backtrack(iter):
            nonlocal mn, dist

            if iter == len(cookies):
                mn = min(mn, max(dist))
                return

            if mn <= max(dist): return

            for j in range(k):
                dist[j] += cookies[iter]
                backtrack(iter + 1)
                dist[j] -= cookies[iter]

            return

        backtrack(0)
        return mn