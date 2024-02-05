#include <iostream>
#include <algorithm>
using namespace std;

#define INF 2e9   //;조심....

int DP[100'001];

int changes(int n) {
	/*int temp = n / 5;
	switch (n % 5) {
	case 0: return temp;
	case 1: return temp - 1 + 3;
	case 2: return temp + 1;
	case 3: return temp - 1 + 4;
	case 4: return temp + 2;
	}*/

	/*if ((n % 5) % 2 == 0) { return temp + n % 5 / 2; }
	if ((n % 5 - 1) % 2 == 0) { return temp - 1 + (n % 5 + 5) / 2; }*/

	if (n < 0) { return INF; }
	if (DP[n] < INF) { return DP[n]; }        //DP[n]에서 n의 범위가 negative가 되면 안된다
	if (n == 0) { return DP[0] = 0; }
	return DP[n] = min(changes(n - 2), changes(n - 5)) + 1;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);

	fill_n(DP, 100'001, INF);

	int n;
	cin >> n;
	
	//if (n == 1 || n == 3) { cout << -1 << "\n"; return 0; }
	if (changes(n) >= INF) { cout << -1 << "\n"; return 0; }
	cout << changes(n) << "\n";
}