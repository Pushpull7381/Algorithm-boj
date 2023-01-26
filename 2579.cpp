#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int N; cin >> N;
    vector<int> values(N, 0);
    
    for(int i=0;i<N;++i) {
        cin >> values[i];
    }

    int count = 0;
    int sum = values[0];
    for(int i=1;i<N-2;++i) {
        count = 0;
        if(values[i]>values[i+1]) {
            sum += values[i];
            
        }
    }

}