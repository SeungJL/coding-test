# 필요한 함수 정의하기
# 각 반의 학생별 사탕 개수 입력받아 계산
def calculate():
  n = int(input())
  for i in range(n):
    listData = list(map(int, input().split()))
    sum = 0
    for j in listData:
      sum += j
    students = len(listData)
    if sum % len(listData) == 0:
      result = "YES"
    else:
      result = "NO"
  return result

# 출력
print(calculate())
