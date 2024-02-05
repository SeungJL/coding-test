#include <iostream>
using namespace std;

int cntfib{ 1 };
int cntfibonacci{ 0 };

int fib(int n) {
	if (n == 1 || n == 2) return 1;
	cntfib++;
	return fib(n - 1) + fib(n - 2);
}

int f[41];
int fibonacci(int n) {
	f[1] = f[2] = 1;
	for (int i{ 3 }; i <= n; i++) {
		cntfibonacci++;
		f[i] = f[i - 1] + f[i - 2];
	}
	return f[n];
}
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n;
	cin >> n;
	fib(n);
	fibonacci(n);
	cout << cntfib << " " << cntfibonacci << "\n";
}