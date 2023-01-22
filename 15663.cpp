#include <bits/stdc++.h>
using namespace std;

int n, m;
vector<int> v;
int arr[19];

void func(int cnt) {
    if(cnt == m) {
        for(int i=0;i<m;i++)
            cout << arr[i] << " ";
        cout << '\n';
        return;
    }
    for(int i=0;i<v.size();i++) {

        arr[cnt] = v[i];
        func(cnt+1);

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


    func(0);
}