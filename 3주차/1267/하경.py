# 함수 정의
def yeongsik(listData):
  sum = 0
  for element in listData:
    if element < 30:
      sum += 10
    elif element >= 30:
      sum += 10 * (element//30 +1)
  return sum

def minsik(listData):
  sum = 0
  for element in listData:
    if element < 60:
      sum += 15
    elif element >= 60:
      sum += 15*(element//60 +1)
  return sum

# 사용자로부터 테스트케이스 입력받기
n = int(input())

# 통화 시간 목록 입력받기
listData = list(map(int, input().split()))

# Y, M 변수 각각에 영식, 민식 요금제 계산 결과 할당
Y = yeongsik(listData)
M = minsik(listData)

# 계산 결과 비교 및 비교 결과에 따른 출력
if Y > M:
  print("M", M)
elif Y < M:
  print("Y", Y)
elif Y == M:
  print("Y", "M", Y)
