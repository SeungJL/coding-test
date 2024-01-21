N = int(input())
data = list(map(int,input().split()))
Y,M = 0,0
for time in data:
  Y+=((time//30)+1)*10
  M+=((time//60)+1)*15
if Y<M:
  print('Y',Y)
elif Y==M:
  print('Y M',Y)
else:
  print('M',M)
