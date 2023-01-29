#include "bits/stdc++.h"
using namespace std;

int main() {
    string str; cin >> str;
    stack<char> s;
    int ans=1, total=0;

    for(int i=0;i<str.length();i++) {
        if(str[i]=='(') {
            s.push(str[i]);
            ans*=2;
        }
        else if(str[i]=='[') {
            s.push(str[i]);
            ans*=3;
        }
        else if(str[i]==')') {
            if(s.empty() || s.top()!='(') {
                cout << 0;
                return 0;
            }
            if(str[i-1]=='(') total+=ans;
            ans/=2;
            s.pop();
        }
        else if(str[i]=']') {
            if(s.empty() || s.top()!='[') {
                cout << 0;
                return 0;
            }
            if(str[i-1]=='[') total+=ans;
            ans/=3;
            s.pop();
        }
    }
    if(s.empty()) cout << total;
    else cout << 0;
}