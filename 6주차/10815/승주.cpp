#include <iostream>
#include <string>
#include <cmath>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> v;

int binarySearch(int start, int end, int target) {
    if (end - start <= 1) {
        if (target == v[start])
            return start;
        return -1;
    }
    int result = -1;
    int mid = (int)((start + end) / 2);
    if (v[mid] == target)
        result = mid;
    else if (v[mid] > target)
        result = binarySearch(start, mid, target);
    else if (v[mid] < target)
        result = binarySearch(mid + 1, end, target);

    return result;
}

int main() {
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int N, M;
    cin >> N;
    int input;
    for (int i = 0; i < N; i++) {
        cin >> input;
        v.push_back(input);
    }
    sort(v.begin(), v.end());

    cin >> M;
    for (int i = 0; i < M; i++) {
        cin >> input;
        if (binarySearch(0, v.size(), input) != -1)cout << 1;
        else cout << 0;
        cout << " ";
    }

    return 0;
}