#include <iostream>
#include <vector>
#include <set>

using namespace std;

/*bool operator<(string& lhs, string& rhs) {
	if (lhs.length() == rhs.length()) {
		return lhs < rhs;
	}
	return lhs.length() < rhs.length();
}*/
struct compare {
	bool operator()(const string& lhs, const string& rhs) const{
		if (lhs.length() == rhs.length()) {
			return lhs < rhs;
		}
		return lhs.length() < rhs.length();
	}
};

int main() {
	int N;
	cin >> N;
	/*vector<string> list(N);
	for (int i{ 0 }; i < N; i++) {
		cin >> list[i];
	}
	set<string, compare> s(list.begin(), list.end());
	s.insert(list.begin(), list.end());*/
	set<string, compare> s;
	while (N--) {
		string word;
		cin >> word;
		s.insert(word);
	}
	
	for (auto word : s) {
		cout << word << '\n';
	}
}