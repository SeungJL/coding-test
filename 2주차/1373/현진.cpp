#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	string binary;
	cin >> binary;
	
	/*int octalNum = 0;       //�ð��ʰ�
	int len = binary.length();
	for (int i = 0; i < len; i++) {

		if (binary[len - i - 1] == '1' && i % 3 == 0) { octalNum += 1; }
		else if (binary[len - i - 1] == '1' && i % 3 == 1) { octalNum += 2; }
		else if (binary[len - i - 1] == '1' && i % 3 == 2) { octalNum += 4; }

		if (i % 3 == 2 || i == len - 1) {
			octal = (char)(octalNum + '0') + octal;
			octalNum = 0;
		}
	}*/

	//3�� �� �ݺ��� ������ ����(011 / 001 / 100) �տ� 0�� �ٿ� formatting
	int format = (3 - binary.length() % 3) % 3;  
	while (format--) {

		binary = '0' + binary;

	}

	//i = 0, 3, 6, 9, ... ����       char to int �� ���� �ڸ� �������(2^2, 2^1, 2^0) ���Ͽ� ���
	for (int i = 0; i < binary.length(); i += 3) {

		cout << (binary[i] - '0') * 4 + (binary[i + 1] - '0') * 2 + (binary[i + 2] - '0');

	}
}