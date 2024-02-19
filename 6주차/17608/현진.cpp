#include <iostream>
using namespace std;

int arr[100001];

int main() {
	int N;
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> arr[i];
	}
	int count = 0;
	int longest = 0;
	for(int i = N-1;i >= 0;i--){
		if (arr[i] > longest) {
			count++;
			longest = arr[i];
		}
	}
	cout << count << "\n";
}