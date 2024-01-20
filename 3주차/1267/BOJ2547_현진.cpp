#include <iostream>
using namespace std;

int N;
long long candy;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int T;
	cin >> T;
	while (T--) {
		cin >> N;
		long long remainder{ 0 };
		for (int i = 0; i < N; i++) {
			cin >> candy;
			remainder += candy % N;
		}
		if (remainder % N == 0) { cout << "YES\n"; }
		else { cout << "NO\n"; }
	}
}