#include "bits/stdc++.h"
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    string s;
    cin >> s;
    int ans=0,j=0;
    for(int i=s.size()-1;i>=0;i--){
        if(s[i]-'0'>9) {
            ans+=(s[i]-'A'+10)*pow(16,j);
        }
        else {
            ans+=(s[i]-'0')*pow(16,j);
        }
        j++;
    }
    cout << ans;
}