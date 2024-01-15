#include <iostream>
#include <queue>
using namespace std;

int N, K;
queue<int> q;  //������ ��ȯ�ϸ鼭 FIFO ������ �ǹǷ� queue ���

int main() {
	cin >> N >> K;

	cout << "<";

	for(int i = 1; i <= N;i++) {

		q.push(i);

	}//O(N)

	//queue�� element 1�� ���� ������ K�� �� �ݺ�
	while (q.size() > 1) {
		for (int i = 0; i < K - 1; i++) {
			//ù��°���� K - 1��°������ �״�� push back 
			int temp = q.front();
			q.pop();
			q.push(temp);

		}  //O(K)
		//K��°�� ���
		cout << q.front() << ", ";
		q.pop();
	} //O(KN)??
	//������ element�� �ٸ� �������� ���
	cout << q.front() << ">\n";
}