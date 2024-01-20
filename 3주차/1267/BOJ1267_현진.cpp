#include <iostream>
using namespace std;

int timeOfCall;

int Y(int t) {
	return (t / 30) * 10 + 10;
}

int M(int t) {
	return (t / 60) * 15 + 15;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N;
	cin >> N;
	
	int ycosts{ 0 };
	int mcosts{ 0 };

	while (N--) {
		cin >> timeOfCall;
		ycosts += Y(timeOfCall);
		mcosts += M(timeOfCall);
	}

	if (ycosts < mcosts) {
		cout << "Y " << ycosts << '\n';
	}
	else if (ycosts > mcosts) {
		cout << "M " << mcosts << '\n';
	}
	else { cout << "Y " << "M " << ycosts << '\n'; }
}