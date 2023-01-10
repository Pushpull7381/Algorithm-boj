#include <bits/stdc++.h>
using namespace std;
#define x first
#define y second
int n, m;
int board[1002][1002];
int dist[1002][1002];
int dx[4] = {-1, 0, 1, 0};
int dy[4] = {0, 1, 0, -1};
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    queue<pair<int, int>> Q;
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> board[i][j];
            if(board[i][j]==1)
                Q.push({i,j});
            else if(board[i][j]==0)
                dist[i][j]=-1;
        }
    }
    while(!Q.empty()) {
        auto cur = Q.front(); Q.pop();
        for(int dir = 0;dir < 4; dir++) {
            int nx = cur.x + dx[dir];
            int ny = cur.y + dy[dir];
            if(nx >= n || nx < 0 || ny < 0 || ny >= m) continue;
            if(dist[nx][ny]>=0) continue;
            dist[nx][ny] = dist[cur.x][cur.y]+1;
            Q.push({nx, ny});
        }
    }
    int ans = 0;
    for(int i=0;i<n;i++) {
        for(int j=0;j<m;j++) {
            if(dist[i][j]==-1) {
                cout << -1;
                return 0;
            }
            ans = max(ans,dist[i][j]);
        }
    }
    cout << ans;

}