#include <iostream>
using namespace std;

int main() {
	int A, B;
	cin >> A >> B;

	int currentNum = 1; //���� ����
	int tempCnt = 0; //�ش� ���ڰ� ���� Ƚ��
	int sum = 0; // ���� ��
	int prevSum = 0; // A�� ������ ���������� ���� ��

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
