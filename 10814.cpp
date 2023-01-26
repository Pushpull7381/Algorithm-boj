#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool compare(pair<int, string> i1,pair<int, string> i2) {
    return i1.first < i2.first;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    vector<pair<int, string>> arr;
    int N, M; cin >> N;
    string s;
    for(int i=0;i<N;i++) {
        cin >> M;
        cin >> s;
        arr.push_back(pair<int, string>(M, s));
    }
    stable_sort(arr.begin(), arr.end(), compare);
    // for(auto iter = arr.begin();iter != arr.end();iter++) {
    //     cout << iter->first << ' ' << iter->second << '\n';
    // }
    for(int i=0;i<N;i++) {
        cout << arr[i].first << ' ' << arr[i].second << '\n';
    }
}


