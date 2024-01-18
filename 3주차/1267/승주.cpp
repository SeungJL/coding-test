#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int N;
	cin >> N;

	int YSum = 0;
	int MSum = 0;
	int value;
	while (N--) {
		cin >> value;
		YSum += (value / 30 + 1) * 10;
		MSum += (value / 60 + 1) * 15;
	}

	if (YSum <= MSum)cout << "Y" << " ";
	if (MSum <= YSum) cout << "M" << " ";
	cout << min(YSum, MSum);

	return 0;
}