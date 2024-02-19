#include <iostream>
#include <unordered_map>
using namespace std;

unordered_map<string, int> um;
int resultLen;
char resultC;

int main() {
	int N;
	cin >> N;
	while(N--) {
		string s,c;
		cin >> s;
		c = s;
		for (int i = 0; i < s.length() / 2; i++) {
			swap(s[i], s[s.length() - 1 - i]);
		}
		um.insert({ s, s.length() });

		if (um.count(c)) {
			resultLen = um[c];
			resultC = c[resultLen / 2];
		}
	}
	cout << resultLen << " " << resultC << "\n";
}