#include <iostream>
using namespace std;

int main() {
	int A, B;
	cin >> A >> B;

	int currentNum = 1; //현재 숫자
	int tempCnt = 0; //해당 숫자가 나온 횟수
	int sum = 0; // 누적 합
	int prevSum = 0; // A가 나오기 직전까지의 누적 합

	for (int i = 1; i <= 1000; i++) {
		if (i == A) prevSum = sum;

		sum += currentNum;
		tempCnt++;

		if (currentNum == tempCnt) {
			currentNum++;
			tempCnt = 0;
		}
		if (i == B) {
			cout << sum - prevSum;
			break;
		}
	}
	return 0;
}
