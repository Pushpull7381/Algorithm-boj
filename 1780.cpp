#include <bits/stdc++.h>
using namespace std;

int N[2190][2190];
int n;
int cnt[3]; // cnt[0]: -1, cnt[1]: 0, cnt[2]: 1
void recur(int n, int x, int y) {
    if(n == 1) {
        if(N[x][y]==-1) cnt[0]++;
        else if(N[x][y]==0) cnt[1]++;
        else if(N[x][y]==1) cnt[2]++;
        return;
    }
    bool chk = true;
    int val = N[x][y];
    for(int i = x-n+1;i<=x;i++) {
        for(int j = y-n+1;j<=y;j++) {
            if(val != N[i][j]) {
                chk = false;
                break;
            }
        }
    }
    if(chk) {
        if(val==-1) cnt[0]++;
        else if(val==0) cnt[1]++;
        else if(val==1) cnt[2]++;
        return;
    }
    else {
        recur(n/3,x,y);
        recur(n/3,x-(n/3),y);
        recur(n/3,x-2*(n/3),y);
        recur(n/3,x,y-(n/3));
        recur(n/3,x-(n/3),y-(n/3));
        recur(n/3,x-2*(n/3),y-(n/3));
        recur(n/3,x,y-2*(n/3));
        recur(n/3,x-(n/3),y-2*(n/3));
        recur(n/3,x-2*(n/3),y-2*(n/3));
    }


}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;

    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            cin >> N[i][j];

    recur(n,n-1,n-1);
    cout << cnt[0] << "\n" << cnt[1] << "\n" << cnt[2];


}