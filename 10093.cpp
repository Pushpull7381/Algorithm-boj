#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long a, b; cin >> a >> b;
    if(a>b) {
        long long tmp=b;
        b=a;
        a=tmp;
    }
    if(a==b) cout << 0;
    else {
        cout << b-a-1 <<'\n';
        long long dif=b-a;
        for(long long i=1;i<dif;i++) cout << i+a << ' ';
    }
}