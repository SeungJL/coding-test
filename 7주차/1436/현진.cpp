#include <iostream>
#include <string>
using namespace std;

int main() {
	int N;
	cin >> N;
	int cnt{ 0 };
	string num{ "666" };
	while (cnt < N) {
		for (int i{ 0 }; i < num.length(); i++) {
			if (num[i] == '6' && num[i + 1] == '6' && num[i + 2] == '6') { cnt++; break; }
		}
		num = to_string(stoi(num) + 1);
	}
	cout << stoi(num) - 1 << "\n";
}