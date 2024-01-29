# input
N,M = map(int,input().split())

# 최대공약수
a,b = N,M
while b>0:
  a,b = b,a%b
print(a)

#최소공배수
print(N*M//a)
