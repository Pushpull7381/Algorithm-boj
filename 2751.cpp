#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N, x;
    cin >> N;
    vector<int> arr;
    while(N--) {
        cin >> x;
        arr.push_back(x);
    }
    sort(arr.begin(), arr.end());
    for(int c: arr){
        cout << c << "\n";
    }
}