#include <iostream>
using namespace std;

long long koongFib[68]{ 0 };    //memoization(��� �� ���� ���� �迭�� ����)     koong{67}�� ������� 2^32�� �Ѿ�Ƿ� longlong ���
int N;

//recursion(���)
long long koong(int n) {
	//�̹� ����� ��� ����� �ִٸ� �ٷ� return
	if (koongFib[n] != 0) return koongFib[n];
	//base-cases
	if (n < 2) return koongFib[0] = koongFib[1] = 1;
	else if (n == 2) return koongFib[2] = 2;
	else if (n == 3) return koongFib[3] = 4;
	
	return koongFib[n] = koong(n - 1) + koong(n - 2) + koong(n - 3) + koong(n - 4);
}

int main() {
	//1 1 2 4 8 15 29 56 ...
	int t;
	cin >> t;
	while (t--) {

		cin >> N;

		cout << koong(N) << "\n";
	}

}