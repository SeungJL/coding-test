#include <iostream>
#include <queue>
using namespace std;

int N, K;
queue<int> q;  //원으로 순환하면서 FIFO 구조가 되므로 queue 사용

int main() {
	cin >> N >> K;

	cout << "<";

	for(int i = 1; i <= N;i++) {

		q.push(i);

	}//O(N)

	//queue에 element 1개 남을 때까지 K개 씩 반복
	while (q.size() > 1) {
		for (int i = 0; i < K - 1; i++) {
			//첫번째부터 K - 1번째까지는 그대로 push back 
			int temp = q.front();
			q.pop();
			q.push(temp);

		}  //O(K)
		//K번째는 출력
		cout << q.front() << ", ";
		q.pop();
	} //O(KN)??
	//마지막 element는 다른 포맷으로 출력
	cout << q.front() << ">\n";
}