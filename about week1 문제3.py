N = int(input())  # 로프의 개수 입력
ropes = [int(input()) for _ in range(N)]  # 각 로프의 최대 중량 입력

# 각 로프를 오름차순으로 정렬
ropes.sort(reverse=True)

# 각 로프가 들 수 있는 중량을 구하고 최대 중량 갱신
max_weight = 0
for i in range(N):
    weight = ropes[i] * (i + 1)
    max_weight = max(max_weight, weight)

print(max_weight)
#
물체의 최대 중량을 구하는 코드를 작성해볼게.

python
Copy code
N = int(input())  # 로프의 개수 입력
ropes = [int(input()) for _ in range(N)]  # 각 로프의 최대 중량 입력

# 각 로프를 오름차순으로 정렬
ropes.sort(reverse=True)

# 각 로프가 들 수 있는 중량을 구하고 최대 중량 갱신
max_weight = 0
for i in range(N):
    weight = ropes[i] * (i + 1)
    max_weight = max(max_weight, weight)

print(max_weight)
# 코드를 한 줄씩 해석하기.
#
# N = int(input()): 로프의 개수 N을 입력받는다.
#
# ropes = [int(input()) for _ in range(N)]: N개의 로프에 대해 최대 중량을 입력받아 리스트에 저장한다.
#
# ropes.sort(reverse=True): 입력받은 로프 중량을 내림차순으로 정렬한다.
#
# max_weight = 0: 최대 중량을 저장할 변수를 초기화한다.
#
# for i in range(N):: 로프의 개수만큼 반복하는 루프를 시작한다.
#
# weight = ropes[i] * (i + 1): 현재 로프가 들 수 있는 중량을 계산한다. (로프의 최대 중량 * 현재 로프의 순서)
#
# max_weight = max(max_weight, weight): 현재 계산된 중량과 기존의 최대 중량 중 큰 값을 최대 중량으로 갱신한다.
#
# print(max_weight): 최종적으로 계산된 최대 중량을 출력한다.