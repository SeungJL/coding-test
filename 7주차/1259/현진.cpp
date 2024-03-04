#include <iostream>
using namespace std;

int main() {
	string testcase;
	cin >> testcase;
	while (testcase != "0") {
		bool isPalindrom{ true };
		for (int i{ 0 }; i < testcase.length() / 2; i++) {
			if (testcase[i] != testcase[testcase.length() - 1 - i]) { isPalindrom = false; break; }
		}
		cout << ((isPalindrom) ? "yes" : "no");
		cout << "\n";
		cin >> testcase;
	}
}