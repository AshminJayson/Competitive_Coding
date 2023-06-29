t = int(input())

def solution():
	a, b = map(int, input().strip().split(' '))
	c, d = map(int, input().strip().split(' '))
	e, f = map(int, input().strip().split(' '))

	assume = 1
	if c > a and e > a:
		assume += abs(min(c, e) - a)
	elif c < a and e < a:
		assume += abs(max(c, e) - a)
	
	if d > b and f > b:
		assume += abs(min(d, f) - b)
	if d < b and f < b:
		assume += abs(max(d, f) - b)

	print(assume)

for _ in range(t):
	solution()