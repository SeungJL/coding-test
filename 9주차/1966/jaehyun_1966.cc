#include <bits/stdc++.h>
// N size <= 100. Simulating with array: O(N^2(compare every element for every N prints)). It would work! (<< 100000000)
// https://jiwanm.github.io/stl/algorithm/#lower_bound
using namespace std;
int m, n;
typedef pair<int, int> pii;
// void print(const vector<pii> arr) {
//     for(auto i=arr.begin(),e=arr.end();i!=e;i++) {
//         cout << i->first << '\n';
//     }
//     cout << '\n';
// }
int main() {
    cin.tie(NULL); ios_base::sync_with_stdio(false);
    int t; cin >> t;
    while(t--) {
        vector<pii> arr;
        cin >> m >> n;
        arr.resize(m);
        for(int i=0;i<m;++i) {
            cin >> arr[i].first;
            arr[i].second = i;
        }
        int cnt = 0, e, i;
        bool selected = false;
        while(!selected) { // https://0xffffffff.tistory.com/45
            // print(arr);
            // e: 가장 큰 원소가 나오는 제일 처음 index
            int num = arr[e=0].first;
            for(i=1,m=arr.size();i<m;++i) if(num<arr[i].first) num = arr[e=i].first;

            if(arr[e].second == n) selected = true;

            arr.insert(arr.end(), arr.begin(), arr.begin()+e); // arr의 0~e-1째 인덱스 데이터를 arr의 끝에 붙여넣는다.
            arr.erase(arr.begin(), arr.begin()+e+1); // arr의 0~e째 인덱스를 삭제한다.
            cnt++; // 출력 count
        }
        cout << cnt << '\n';
    }
    return 0;
}