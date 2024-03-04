#include <iostream>
using namespace std;

bool board[51][51];

int cntRectoClr(int x, int y) {
	/*8*8 보드의 시작점 (x, y)가 주어졌을 때
	시작점을 검은색으로 칠했을 때 칠해야 할 정사각형의 개수 bcnt와
	시작점을 흰색으로 칠했을 때 칠해야 할 정사각형의 개수 wcnt를 구한 뒤
	둘 중 최솟값을 반환한다*/

	int bcnt{ 0 };
	/*for (int i{ x }; i < x + 8; i++) {
		for (int j{ y }; j < y + 8; j++) {
			if ((i - x) % 2 == 0) {
				if ((j - y) % 2 == 0 && board[i][j] != true) bcnt++;
				if ((j - y) % 2 != 0 && board[i][j] != false) bcnt++;
			}
			else {
				if ((j - y) % 2 == 0 && board[i][j] != false) bcnt++;
				if ((j - y) % 2 != 0 && board[i][j] != true) bcnt++;
			}
		}
	}*/
	bool isitRight{ true }; //black부터 시작
	for (int i{ x }; i < x + 8; i++) {
		for (int j{ y }; j < y + 8; j++) {
			if(board[i][j] != isitRight) bcnt++;
			isitRight = !isitRight; 
		}
		isitRight = !isitRight;  //줄이 넘어가면 다른 색으로 시작
	}

	int wcnt{ 64 - bcnt };
	return (bcnt <= wcnt) ? bcnt : wcnt;
}

int main() {
	int n, m;
	cin >> n >> m;
	for (int i{ 1 }; i <= n; i++) {
		for (int j{ 1 }; j <= m; j++) {
			char a;
			cin >> a;
			board[i][j] = !(a == 'W');
		}
	}

	int minCnt{ 64 };
	for (int i{ 1 }; i <= n - 7; i++) {
		for (int j{ 1 }; j <= m - 7; j++) {
			int res = cntRectoClr(i, j);
			if(minCnt > res) minCnt = res;
		}
	}
	cout << minCnt << "\n";
}