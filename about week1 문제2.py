def can_transform(A, B):
    sum_A = sum(map(int, str(abs(A))))  # A의 각 자리수를 더한 값
    sum_B = sum(map(int, str(abs(B))))  # B의 각 자리수를 더한 값

    return sum_A == sum_B

T = int(input())  # 테스트 케이스 개수 입력

for _ in range(T):
    A, B = map(int, input().split())  # 각 테스트 케이스의 A, B 입력
    result = "yes" if can_transform(A, B) else "no"  # 변할 수 있는지 여부 판별
    print(result)

#def can_transform(A, B):: A와 B가 변환 가능한지 판별하는 함수를 정의한다.

# sum_A = sum(map(int, str(abs(A)))): A의 각 자리수를 더해서 sum_A에 저장한다.
#
# sum_B = sum(map(int, str(abs(B)))): B의 각 자리수를 더해서 sum_B에 저장한다.
#
# return sum_A == sum_B: A와 B의 각 자리수의 합이 같으면 True를 반환하고, 아니면 False를 반환한다.
#
# T = int(input()): 테스트 케이스의 개수 T를 입력받는다.
#
# for _ in range(T):: T번 반복하는 루프를 시작한다.
#
# A, B = map(int, input().split()): 각 테스트 케이스의 A와 B를 입력받는다.
#
# result = "yes" if can_transform(A, B) else "no": 변환 가능 여부에 따라 result에 "yes" 또는 "no"를 저장한다.
#
# print(result): 결과를 출력한다.