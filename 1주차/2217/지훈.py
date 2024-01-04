N = int(input())  # 로프 개수
li = list() # 로프의 길이가 저장된 list
result = 0  # 최대 중량

for _ in range(N):  # list에 로프 길이를 저장
  li.append(int(input()))

li.sort()
for _ in range(len(li)):
  m = li[0]*len(li)
  if m>result:
    result = m
  li.pop(0)
print(result)
