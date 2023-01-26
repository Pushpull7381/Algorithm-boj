#include "bits/stdc++.h"
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    stack<int> s;
    int K; cin >> K;
    int c;
    for(int i=0;i<K;i++) {
        cin >> c;
        if(c!=0) {
            s.push(c);
        }
        else s.pop();
    }
    int sum=0;
    int size = s.size();
    for(int i=0;i<size;i++) {
        sum+=s.top();
        s.pop();
    }
    cout << sum;
}