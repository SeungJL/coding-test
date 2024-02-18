#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int arr[100000];

int main() {
	int n;
	cin >> n;

	arr[1] = -1;
	arr[2] = 1;
	arr[3] = -1;
	arr[4] = 2;
	arr[5] = 1;

	for (int i = 6; i <= n; i++) {
		if (arr[i - 2] == -1 && arr[i - 5] == -1) {
			cout << -1;
			return 0;
		}
		if (arr[i - 2] == -1) {
			arr[i] = arr[i - 5] + 1;
		}
		else if (arr[i - 5] == -1) {
			arr[i] = arr[i - 2] + 1;
		}
		else arr[i] = min(arr[i - 2], arr[i - 5]) + 1;


		/*	int fiveCoinMax = n / 5;
			for (int j = fiveCoinMax; j >= 0; j--) {
				int extraMoney = n - j * 5;
				if (!(extraMoney % 2)) {
					arr[i] = fiveCoinMax + extraMoney / 2;
					break;
				}
				if (j ==  0) {
					arr[i] = -1;
				}
			}*/
	}

	cout << arr[n];
	return 0;
}