#include "bits/stdc++.h"
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N,K;
    cin >> N >> K;
    queue<int> q;
    for(int i=1;i<N+1;i++) {
        q.push(i);
    }

    cout << '<';
    while(q.size()!=1) {
        for(int i=1;i<K;i++){
            int tmp = q.front();
            q.pop();
            q.push(tmp);
        }
        cout << q.front() << ", ";
        q.pop();
    }
    cout << q.front() << '>';
}