n, m = map(int, input().split())
lt = [e for e in range(1, n+1)]
for _ in range(m):
    i, j = map(int, input().split())
    t = lt[i-1]
    lt[i-1] = lt[j-1]
    lt[j-1] = t

for result in lt:
    print(result, end=' ')
