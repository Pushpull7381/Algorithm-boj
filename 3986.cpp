#include "bits/stdc++.h"
using namespace std;

int main() {
    int N, good = 0; cin >> N;
    while(N--) {
        stack<char> s;
        string str; cin >> str;
        for(auto c : str) {
            if(!s.empty() and s.top() == c) s.pop();
            else s.push(c);
        }
        if(s.empty()) good++;
    }
    cout << good;
}
// 어차피 다른 단어일때 pop을 안해도 empty()조건을 만족하지 못할땐 good++이 되지 않으므로 그냥 구분없이 체크