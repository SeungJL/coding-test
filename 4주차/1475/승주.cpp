#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main() {
	int N;
	cin >> N;

	string NStr = to_string(N);
	int numLength = 10;
	int numArr[10] = {};

	for (int i = 0; i < NStr.length(); i++) {
		numArr[NStr[i] - '0']++;
	}

	int maxValue = 0;
	int sixNineSum = 0;
	for (int i = 0; i < 10; i++) {
		int cnt = numArr[i];
		if (i == 6 || i == 9) {
			sixNineSum += cnt;
		}
		else {
			if (maxValue < cnt) {
				maxValue = cnt;
			}
		}
	}

	int extraCnt = 0;
	if (sixNineSum % 2) {
		extraCnt++;
	}

	cout << max(maxValue, sixNineSum / 2 + extraCnt);

	return 0;
}