#include <iostream>
#include <algorithm>
using namespace std;

int arr[100000];

int main() {
	int N;
	cin >> N;

	int maxValue = 0;

	for (int i = 0; i < N; i++) {
		cin >> arr[i];
	}
	sort(arr, arr + N);

	for (int i = 0; i < N; i++) {
		int totalValue = arr[i] * (N - i);
		if (maxValue < totalValue)maxValue = totalValue;
	}
	cout << maxValue;
}
