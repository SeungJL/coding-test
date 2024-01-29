#include <iostream>
using namespace std;

int main() {
	int N, M;
	cin >> N >> M;
	int multi = N * M;
	int r;

	while (M != 0) {
		r = N % M;
		N = M;
		M = r;
	}
	cout << N << endl << multi / N;
	return 0;
}