#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int N, M;
	cin >> N >> M;

	int arr[101];

	for (int i = 1; i <= N; i++) {
		arr[i] = i;
	}
	int n1, n2;
	for (int i = 1; i <= M; i++) {
		cin >> n1 >> n2;
		swap(arr[n1], arr[n2]);
	}
	for (int i = 1; i <= N; i++) {
		cout << arr[i] << " ";
	}
	return 0;
}