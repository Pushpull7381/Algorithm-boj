#include <iostream>
using namespace std;
int N[130][130];
int cnt[2]; //cnt[0]: 0, cnt[1]:1
void color(int n, int x, int y) {
    if(n==1) {
        cnt[N[x][y]]++;
        return;
    }
    int val = N[x][y];
    bool chk = true;
    for(int i=x-n+1;i<=x;i++) {
        for(int j=y-n+1;j<=y;j++) {
            if(val!= N[i][j]) {
                chk = false;
                break;
            }
        }
    }
    if(chk) {
        cnt[val]++;
        return;
    }
    color(n/2,x,y);
    color(n/2,x-(n/2),y);
    color(n/2,x,y-(n/2));
    color(n/2,x-(n/2),y-(n/2));
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n; cin >> n;
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            cin >> N[i][j];

    color(n,n-1,n-1);
    cout << cnt[0] << "\n" << cnt[1];
}