T = int(input())
count = 0
while count!=T:
  if not input():  # 공백을 입력하면 실행된다
    candy = 0  # 사탕 개수 초기화
    student = int(input())  # 학생 수를 입력받는다
    for i in range(student):
      candy+=int(input())  # 사탕 개수를 입력받는 코드를 학생 수만큼 반복한다
    print('YES' if not candy%student else 'NO')  # 나머지값이 없으면 YES 있으면 NO
    count+=1
