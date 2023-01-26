#include <iostream>
#include <string>
using namespace std;

int main() {
    string st;
    int cnt[26];
    for(int i=0;i<26;i++) {
        cnt[i]=-1;
    }
    cin >> st;
    for(int i=0;i<st.size();i++) {
        if(cnt[st[i]-'a']==-1) {
            cnt[st[i]-'a']= i; 
        }  
    }
    for(int i=0;i<26;i++) {
        cout << cnt[i] << " ";
    }
}


