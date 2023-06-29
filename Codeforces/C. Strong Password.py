# This solution results in TLE

t = int(input())

def solution():
	s = input()
	m = int(input())
	l = input()
	r = input()

	prev = []

	def issub(i, j, strb):
		i, j = 0, 0

		while i < len(strb) and j < len(s):
			if strb[i] == s[j]:
				i += 1
				j += 1
			else:
				j += 1

		if i == len(strb): return True
		if j == len(s): return False



	def dfs(i, token):
		if i == m:
			if not issub(0, 0, token):
				return True
			return False

		for k in range(int(l[i]), int(r[i]) + 1):
			token.append(str(k))
			if dfs(i+1, token):
				return True
			token.pop()


	if dfs(0, []):
		print("YES")
	else:
		print("NO")
	return

for _ in range(t):
	solution()