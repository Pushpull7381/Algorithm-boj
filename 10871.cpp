// #include <iostream>
// using namespace std;
// int n, x, a[10005];
// int main() {
//     cin.tie(0);
//     ios::sync_with_stdio(0);
//     cin >> n >> x;
//     for(int i=0;i<n;i++) cin >> a[i];
//     for(int i=0;i<n;i++) {
//         if (a[i]<x) cout << a[i] << ' ';
//     }
// }

#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,x,t;
    cin >> n >> x;
    while(n--) {
        cin >> t;
        if(t<x) cout << t << ' ';
    }
}