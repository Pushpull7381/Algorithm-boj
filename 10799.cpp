#include "bits/stdc++.h"
using namespace std;

int main() {
    string str; cin >> str;
    stack<char> s;
    int total=0;
    for(int i=0;i<str.length();i++) {
        if(str[i]=='(') s.push(str[i]);
        else if(str[i] == ')' and str[i-1]=='(') {
            s.pop();
            total+=s.size();
        }
        else if(str[i]==')' and str[i-1]==')') {
            total++;
            s.pop();
        }
    }
    cout << total;
}
// https://ijsilver.tistory.com/4