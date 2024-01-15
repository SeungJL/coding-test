#include <iostream>
using namespace std;

long long koongFib[68]{ 0 };    //memoization(계산 값 재사용 위해 배열에 저장)     koong{67}의 결과값이 2^32을 넘어가므로 longlong 사용
int N;

//recursion(재귀)
long long koong(int n) {
	//이미 저장된 계산 결과가 있다면 바로 return
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