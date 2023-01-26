#include "bits/stdc++.h"
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n; cin >> n;
    while(n--) {
        string input_pw; cin >> input_pw;
        list<char> list_pw;
        auto cursor = list_pw.end();
        for(int i=0;i<input_pw.size();i++) {
            if(input_pw[i]=='<'){
                if(cursor!=list_pw.begin()) cursor--;

            }
            else if(input_pw[i]=='>'){
                if(cursor!=list_pw.end()) cursor++;
            }
            else if(input_pw[i]=='-'){
                if(cursor!=list_pw.begin()) {
                    cursor--;
                    cursor = list_pw.erase(cursor);
                }
            }
            else {
                list_pw.insert(cursor,input_pw[i]);
            }
        }
        for(auto c:list_pw) cout << c;
        cout << '\n';
    }
}