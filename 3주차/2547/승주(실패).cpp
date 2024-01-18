#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int T;
	cin >> T;

	while (T--) {
		int N;
		cin >> N;
		int sum = 0;
		int value = 0;
		for (int i = 0; i < N; i++) {
			cin >> value;
			sum += value;
		}
		if (!(sum % N)) cout << "YES";
		else cout << "NO";
		cout << "\n";
	}
	return 0;
}