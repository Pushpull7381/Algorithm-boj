#include <bits/stdc++.h>
using namespace std;

int main() {
    int N; cin >> N;
    string st, st2;
    cin >> st;
    N--;
    while(N--) {
        cin >> st2;
        for(int i=0;i<st.size();i++) {
            if (st[i] != st2[i])
                st[i] = '?';
        }
    }
    cout << st;
}