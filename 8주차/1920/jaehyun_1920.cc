#include <bits/stdc++.h>
using namespace std;
int arr[100001];

bool binary_search(int start, int end, int target) {
    if(start > end) return false;
    int mid = start + end >> 1; // (start + end)/2
    if(arr[mid] == target) return true;
    if(arr[mid]<target) return binary_search(mid+1, end, target);
    else return binary_search(start, mid-1, target);
}

int main() {
    cin.tie(NULL); ios_base::sync_with_stdio(false);
    int n; cin >> n;
    for(int i=0;i<n;++i) cin >> arr[i];
    sort(arr, arr+n);
    int m, q; cin >> m;
    while(m--) {
        cin >> q;
        cout << (binary_search(0, n-1, q)?1:0) << '\n';
    }
    return 0;
}