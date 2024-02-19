#include <iostream>
using namespace std;

bool card[20'000'001]{ false };

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int N;
	int M;
	cin >> N;
	while (N--) {
		int a;
		cin >> a;
		card[a + 10'000'000] = true;
	}
	cin >> M;
	while (M--) {
		int a;
		cin >> a;
		cout << (int)card[a + 10'000'000] << " ";
	}
}
