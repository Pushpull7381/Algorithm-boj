#include "bits/stdc++.h"
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    vector<char> c;
    string st;
    int cnt=10;
    cin >> st;
    for(int i=0;i<st.size();i++) {
        c.push_back(st[i]);
    }
    for(int i=1;i<st.size();i++) {
        if(c[i-1]==c[i]) cnt+=5;
        else cnt+=10;
    }
    cout << cnt;
}