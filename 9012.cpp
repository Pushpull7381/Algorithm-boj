#include "bits/stdc++.h"
using namespace std;

int main() {
    int N; cin >> N;
    while(N--) {
        string str; cin >> str;
        stack<char> s;
        bool isValid = true;
        for(auto c : str) {
            if(c=='(') s.push(c);
            else if(c == ')') {
                if(s.empty()) {
                    isValid = false;
                    break;
                }
                else s.pop();
            }
        }
        if(!isValid or !s.empty()) cout << "NO\n";
        else {
            if(s.empty()) cout << "YES\n";
        }


    }
}