#include <bits/stdc++.h>
using namespace std;
#define X first
#define Y second
int dist[100002];
int n, k;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n >> k; // n: 수빈이, k: 동생
    fill(dist,dist+100001,-1);
    queue<int> Q;
    Q.push(n);
    dist[n]=0;
    while(dist[k]==-1) {
        int cur = Q.front();
        Q.pop();
        for(int i: {cur-1, cur+1, cur*2}) {
            if(i<0 || i>100000) continue;
            if(dist[i]!=-1) continue;
            dist[i] = dist[cur] + 1;
            Q.push(i);
        }
    }
    cout << dist[k];

}