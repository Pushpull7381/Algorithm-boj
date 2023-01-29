#include <bits/stdc++.h>
using namespace std;

int n, m;
vector<int> v;
int arr[10];

void func(int cnt, int idx) {
    if(cnt == m) {
        for(int i=0;i<m;i++)
            cout << arr[i] << " ";
        cout << '\n';
        return;
    }
    for(int i= idx;i<n;i++) {
        arr[cnt] = v[i];
        func(cnt+1,i);
    }
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> m;
    int l;
    for(int i=0;i<n;i++) {
        cin >> l;
        v.push_back(l);
    }
    sort(v.begin(),v.end());
    func(0,0);
}