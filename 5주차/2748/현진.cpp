#include <iostream>
using namespace std;

//int f[91]{ -1 };  ����, {-1, 0, 0, 0, 0, ���� �ʱ�ȭ �ȴ�.
long long f[91];  //������...�׻�...Ȯ��...�Ѵ�...

long long fib(int n) {
	if (f[n] != -1) return f[n];

	if (n == 0) return f[0] = 0;
	if (n == 1) return f[1] = 1;

	return  f[n] = fib(n - 1) + fib(n - 2);
}

int main() {
	fill_n(f, 91, -1);

	int n;
	cin >> n;
	cout << fib(n) << "\n";
}