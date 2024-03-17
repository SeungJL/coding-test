#include <bits/stdc++.h>
using namespace std;
int k, n;
vector<int> arr;

// https://www.acmicpc.net/blog/view/109
// https://www.acmicpc.net/blog/view/106
/** 이건 띵언(?)이라서 남겨둠
 * 
 * 세 줄 요약
[lo, hi]가 Check(lo) != Check(hi)가 되도록 구간을 설정

while (lo + 1 < hi)동안 mid = (lo + hi) / 2에서 Check(mid) = Check(lo)라면 lo = mid, 아니라면 hi = mid

구한 경계에서 답이 lo인지 hi인지 생각해보고 출력

(1에서 경계는 항상 [lo, hi] 내에 존재하고, 2에서 Check(lo), Check(hi)는 변하지 않으며, 3에서 lo + 1 >= hi이고, lo < mid < hi에서 lo < hi이므로 lo + 1 == hi를 만족합니다)
*/

bool check(int x) {
    if(x == 0) return true;
    int cnt=0;
    for(int i=0;i<k;++i) cnt += arr[i]/x;
    return cnt >= n;
}

int binsearch(int s, int e) {
    int mid;
    while(s+1<e) {
        // mid = s+e >> 1; // : (s+e)/2 // Overflow 발생 가능 + etc!
        mid = ((s^e)>>1)+(s&e);
        // cout << mid;
        if(check(mid)) s = mid;
        else e = mid;
    }
    return s;
}

int main() {
    // cout << (-8>>1); // NOT 엄청난 '양수', but -4! => NOT 0 extend to MSB, but 1 extend! => 단순 (s+e)/2는 오버플로우 발생 가능!
    cin.tie(NULL); ios_base::sync_with_stdio(false);
    cin >> k >> n;
    arr.resize(k);
    for(int i=0;i<k;++i) cin >> arr[i];
    cout << (check(~(1<<31)) ? ~(1<<31) : binsearch(0, (1<<31)-1)); // Need to check for the 2^31 - 1 (== (1<<31)-1 == ~(1<<31))!

    return 0;
}

/**
cout << (1<<31)-1; // 2147483647
cout << (1<<31); // -2147483648
cout << ~(1<<31); // 2147483647
cout << ~(1<<31)-1; // 2147483646
*/

/**

3 3
2147483647
2147483647
2147483646

ans: 2147483646
wrong ans e.g.: -536870914

3 4
2147483647
2147483647
2

ans: 1073741823

*/