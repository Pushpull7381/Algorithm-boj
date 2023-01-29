#include "bits/stdc++.h"
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N, cnt; cin >> N;
    vector<int> arr;
    for(int i=2;i<=N;i++) {
        cnt=0;
        for(int j=2;j<=i;j++) {
            if(i%j==0) cnt++;
        }
        if(cnt==1) arr.push_back(i);
    }
    int siz = arr.size(), j=0;
    while(siz-- -1) {
        for(int i=j+1;i<arr.size();i++) {
            if(arr[j]*arr[i]==N) {
                cout <<
            }
        }
    }
}