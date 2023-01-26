#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int N; cin >> N;
    int Min = 0;
    int Young = 0;
    int time=0;
    for(int i=0;i<N;i++) {
        cin >> time;
        Young+=(time/30+1)*10;
        Min+=(time/60+1)*15;
    }
    if(Young>Min) {
        cout << "M " << Min << '\n';
    }
    else if( Young == Min) {
        cout << "Y M " << Young << '\n';
    }
    else {
        cout << "Y " << Young << '\n';
    }
}