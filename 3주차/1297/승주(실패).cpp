#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int D, H, W;
	cin >> D >> H >> W;

	int bValue = 1;
	while (1) {
		int aValue = floor(bValue * H / W);
		if (pow(bValue, 2) + pow(aValue, 2) >= pow(D, 2)) {
			cout << floor((bValue - 1) * H / W) << " " << bValue - 1;
			break;
		}
		bValue++;
	}
	return 0;
}