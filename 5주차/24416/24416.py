# 피보나치 수를 재귀호출로 구하는 함수
def fib_recursive(n, count):
    if n == 1 or n == 2:
        count += 1
        return 1, count
    else:
        count += 1
        a, count = fib_recursive(n - 1, count)
        b, count = fib_recursive(n - 2, count)
        return a + b, count

# 피보나치 수를 동적 프로그래밍으로 구하는 함수
def fib_dynamic_programming(n):
    count = 0
    f = [0] * (n + 1)
    f[1] = f[2] = 1
    count += 2  # 두 번의 할당 연산
    for i in range(3, n + 1):
        f[i] = f[i - 1] + f[i - 2]
        count += 1  # 덧셈 연산만큼 증가
    return f[n], count

n = int(input("n을 입력하세요: "))

result_recursive, count_recursive = fib_recursive(n, 0)
result_dynamic, count_dynamic = fib_dynamic_programming(n)
print("재귀호출 실행 횟수:", count_recursive)
print("동적 프로그래밍 실행 횟수:", count_dynamic)
