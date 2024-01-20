#include <iostream>
#include <cmath>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int D, H, W;
	cin >> D >> H >> W;

	double a = sqrt((double)(D * D) / (H * H + W * W));  //int / int 결과는 int로 저장되므로 double / int가 되도록 캐스팅
	cout << (int)(H * a) << " " << (int)(W * a) << "\n";
}