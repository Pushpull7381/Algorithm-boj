#include "bits/stdc++.h"
using namespace std;

int main() {
    int N, V, a[100];
    fill(a,a+100,-101);
    cin >> N;
    for(int i=0;i<N;i++) {
        cin >> a[i];
    }
    cin >> V;
    int cnt=0;
    for(int i=0;i<N;i++){
        if(a[i]==V) cnt++;
    }
    cout << cnt;
}