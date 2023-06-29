t = int(input())

def finder():
    n, k, x = map(int, input().strip().split(' '))

    def dfs(c, mp):
        if c == 0:
            return True
        if c < 0:
            return False

        for i in range(k, 0, -1):
            if i == x: continue

            mp.append(i)
            if dfs(c-i, mp): return True
            mp.pop()

    ar = []
    if dfs(n, ar):
        print("YES")
        print(len(ar))
        for i in ar:
            print(i, end= ' ')
    else:
        print("NO")

for _ in range(t):
    finder();
