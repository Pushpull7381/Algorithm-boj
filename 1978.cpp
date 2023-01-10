#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, x, cnt = 0;
    cin >> N;
    vector<int> arr;
    while(N--) {
        cin >> x;
        arr.push_back(x);
    }
    for(int x: arr) {
        int n = 2;
        if(x != 1) {
            while(x % n) {
                n++;
            }
            if(n == x) {
                cnt+=1;
            }
        }

    }
    cout << cnt;
}