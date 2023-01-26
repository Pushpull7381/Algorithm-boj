#include <bits/stdc++.h>
using namespace std;


string s;
int siz, mid;
bool chk;
int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);
    cin >> s;
    while(s != "0"){
        chk = true;
        stack<char> S;
        siz = s.size();
        mid = siz / 2;
        if(siz == 1) {
            chk = true;
        }
        else if (siz % 2 == 1) {
            for (int i = 0; i < mid; i++) {
                S.push(s[i]);
            }
            for (int i = 1; i < siz - mid; i++) {
                if (s[mid + i] != S.top()) {
                    cout << "no\n";
                    chk = false;
                    break;
                }
                S.pop();
            }
        }
        else if(siz % 2 == 0){
           for(int i=0;i<mid;i++)
               S.push(s[i]);
           for(int i=0;i<siz-mid;i++) {
               if(s[mid+i]!=S.top()) {
                   cout << "no\n";
                   chk = false;
                   break;
               }
               S.pop();
           }
        }
        if(chk)
            cout << "yes\n";
        cin >> s;
    }


}