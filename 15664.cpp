#include <bits/stdc++.h>
using namespace std;

int n, m;
int arr[10];
int visited[10];
vector<int> v;

void func(int cnt, int idx) {
    if(cnt == m) {
        for(int i=0;i<m;i++) {
            cout << arr[i] << " ";
        }
        cout << '\n';
        return;
    }
    int val = 0;
    for(int i=idx;i<n;i++) {
        if(!visited[i] && val != v[i]) {
            val = v[i];
            arr[cnt] = v[i];
            visited[i] = 1;
            func(cnt+1,i+1);
            visited[i] = 0;
        }
    }
}

int main() {
    cin >> n >> m;
    int l;
    for(int i=0;i<n;i++) {
        cin >> l;
        v.push_back(l);
    }
    sort(v.begin(),v.end());
    func(0,0);
}