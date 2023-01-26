#include <bits/stdc++.h>
using namespace std;
int n, m;
vector<int> v;
int arr[10];
bool visited[10];

void func(int cnt, int idx) {
    if(cnt == m) {
        for(int i=0;i<m;i++)
            cout << arr[i] << " ";
        cout << '\n';
        return;
    }
    for(int i = idx;i<n;i++) {
        if(!visited[i]) {
            arr[cnt] = v[i];
            visited[i] = 1;
            func(cnt+1,i+1);
            visited[i] = 0;
        }
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
    func(0,0);
}