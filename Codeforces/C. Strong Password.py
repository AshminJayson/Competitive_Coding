t = int(input())

def solution():
	s = input()
	m = int(input())
	l = input()
	r = input()

	dp = {}
	for i in range(len(s)):
		dp.setdefault(s[i], []).append(i)

	cur = 0

	for i in range(m):
		start = int(l[i])
		end = int(r[i]) + 1
		mx = cur + 0

		for j in range(start, end):

			if str(j) not in dp:
				mx = len(s)
				break

			def getNext(l, cr):
				for i in l:
					if i >= cr:
						return i

				return len(s)

			mx = max(mx,  getNext(dp[str(j)], cur))

		cur = mx + 1


	print("YES" if cur > len(s) else "NO")
	return


for _ in range(t):
	solution()