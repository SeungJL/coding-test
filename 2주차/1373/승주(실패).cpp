#include <iostream>
#include <string>
#include<cmath>
using namespace std;

int main() {
	string binary;
	cin >> binary;

	int binaryLength = binary.length();
	int octalLength = binaryLength / 3 + 1;

	for (int i = 1; i < binaryLength; i++) {
		if (binary[i] == '1') {
			break;
		}
		if (i == binaryLength - 1) {
			octalLength--;
		}
	}

	string octal = "";

	int temp = 0;
	int octalIdx = octalLength;
	if (octalLength == 1)octalIdx = 2;
	for (int i = 0; i < binaryLength; i++) {
		int idx = binaryLength - i - 1;
		int standardIdx = (octalIdx - 1) * 3;

		if (binary[i] == '1') {
			temp += pow(2, idx - standardIdx);
		}
		if (idx == standardIdx) {
			octal += to_string(temp);
			octalIdx -= 1;
			temp = 0;
		}
	}

	cout << octal;

	return 0;
}