#include <bits/stdc++.h>
using namespace std;

int k, arr[14], input[14];
bool visited[14];

void lotto(int cnt,int idx) {
    if(cnt == 6) {
        for(int i=0;i<6;i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
        return;
    }
    for(int i=idx;i<k;i++) {
        if(!visited[i]) {
            arr[cnt] = input[i];
            visited[i] = 1;
            lotto(cnt+1,i+1);
            visited[i] = 0;
        }
    }
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    while(cin >> k) {
        if(k == 0)
            return 0;
        fill(visited,visited+14,0);
        for(int i=0;i<k;i++) {
            cin >> input[i];
        }
        lotto(0,0);
        cout << "\n";
    }
}