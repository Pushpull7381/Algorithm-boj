#include "bits/stdc++.h"
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N; cin >> N;
    string s;
    deque<int> dq;
    while(N--) {
        cin >> s;
        if(s=="push_front") {
            int x; cin >> x;
            dq.push_front(x);
        }
        else if(s=="push_back") {
            int x; cin >> x;
            dq.push_back(x);
        }
        else if(s=="pop_front") {
            if(!dq.empty()) {
                cout << dq.front() <<'\n';
                dq.pop_front();
            }
            else cout << "-1\n";
        }
        else if(s=="pop_back") {
            if(!dq.empty()) {
                cout << dq.back() <<'\n';
                dq.pop_back();
            }
            else cout << "-1\n";
        }
        else if(s=="size") {
            cout << dq.size() << '\n';
        }
        else if(s=="empty"){
            if(!dq.empty()) cout << "0\n";
            else cout << "1\n";
        }
        else if(s=="front"){
            if(!dq.empty()) {
                cout << dq.front() <<'\n';
            }
            else cout << "-1\n";
        }
        else {
            if(!dq.empty()) {
                cout << dq.back() << '\n';
            }
            else cout << "-1\n";
        }
    }
}