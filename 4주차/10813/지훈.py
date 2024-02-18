# input
N,M = map(int,input().split())
basket = [x for x in range(1,N+1)]

# swap
for _ in range(M):
  a,b = map(int,input().split())
  basket[a-1],basket[b-1] = basket[b-1],basket[a-1]

# print
for i in basket:
  print(i, end=' ')


