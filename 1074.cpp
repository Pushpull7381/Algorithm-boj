#include <bits/stdc++.h>
using namespace std;

int z(int n, int r, int c) {
    if(n==0) return 0;
    int val = pow(2,n-1);
    if(r < val && c < val) return z(n-1, r, c);
    else if(r < val && c >= val) return pow(val,2) + z(n-1,r,c-val);
    else if(r >= val && c < val) return 2*val*val + z(n-1,r-val,c);
    else if(r >= val && c >= val) return 3*val*val + z(n-1,r-val,c-val);
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N, r, c; cin >> N >> r >> c;
    cout << z(N, r, c);

}
