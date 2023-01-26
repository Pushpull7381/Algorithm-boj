#include "bits/stdc++.h"
using namespace std;

int a[1000001]={};
bool occur[2000001];
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n; cin >> n;
    for(int i=0;i<n;i++) {
        cin >> a[i];
    }
    int x, cnt=0; cin >> x;

    for(int i=0;i<n;i++) {
        if(x-a[i]>0 && occur[x-a[i]]) cnt++; // aj가 0이상이고, occur[aj]가 존재한다면 증가
        occur[a[i]]=true;
    }
    cout << cnt;
}