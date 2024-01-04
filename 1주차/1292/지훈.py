s,e = map(int,input().split())  # 시작점, 끝점 저장
li = list()
key = 0
for i in range(1,1001):
  for _ in range(i):
    li+=[i]
    if len(li)>=e:
      key = 1
      break
  if key==1:
    break


A = [0]*(len(li)+1)  # 구간합이 저장할 list
for i in range(1,len(li)+1):
  A[i] = A[i-1]+li[i-1]

print(A[e]-A[s-1])
