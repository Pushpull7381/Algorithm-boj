#include <bits/stdc++.h>
using namespace std;

int n, m;
int arr[10];
vector<int> v;

void func(int cnt) {
    if(cnt == m) {
        for(int i=0;i<m;i++)
            cout << arr[i] << " ";
        cout << "\n";
        return;
    }
    for(int i=0;i<n;i++) {
        arr[cnt] = v[i];
        func(cnt+1);
    }
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> m;
    int k;
    for(int i=0;i<n;i++) {
        cin >> k;
        v.push_back(k);
    }
    sort(v.begin(),v.end());
    func(0);
}