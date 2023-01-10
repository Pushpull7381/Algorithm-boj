/*
#include "bits/stdc++.h"
using namespace std;
#define X first
#define Y second
string board[1002];
int n,m;
int dx[4] = {1,0,-1,0};
int dy[4] = {0,1,0,-1};
int distj[1002][1002];
int distf[1002][1002];
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> m;
    for(int i=0;i<n;i++) {
        cin >> board[i];
    }
    for(int i=0;i<n;i++) {
        fill(distf[i],distf[i]+m,-1);
        fill(distj[i],distj[i]+m,-1);
    }
    queue<pair<int,int>> q_j;
    queue<pair<int,int>> q_f;
    for(int i=0;i<n;i++) {
        for(int j=0;j<m;j++) {
            if (board[i][j] == 'F') {
                q_f.push({i, j});
                distf[i][j] = 0;
            }
            else if(board[i][j] == 'J') {
                q_j.push({i, j});
                distj[i][j] = 0;
            }
        }
    }
    while(!q_f.empty()) {
        auto cur = q_f.front(); q_f.pop();
        for(int dir=0;dir<4;dir++) {
            int nx = cur.X + dx[dir];
            int ny = cur.Y + dy[dir];
            if(nx<0 || nx >=n || ny<0 || ny>=m) continue;
            if(board[nx][ny]=='#' || distf[nx][ny]>=0) continue;
            distf[nx][ny] = distf[cur.X][cur.Y] + 1;
            q_f.push({nx, ny});
        }
    }
    while(!q_j.empty()) {
        auto cur = q_j.front(); q_j.pop();
        for(int dir= 0; dir<4;dir++) {
            int nx = cur.X + dx[dir];
            int ny = cur.Y + dy[dir];
            if(nx<0 || nx >=n || ny <0 || ny >=m) {
                cout << distj[cur.X][cur.Y]+1;
                return 0;
            }
            if(distj[nx][ny]>=0 || board[nx][ny]=='#') continue;
            if(distf[nx][ny]!=-1 && distf[nx][ny]<=distj[nx][ny]) continue;
            distj[nx][ny]=distj[cur.X][cur.Y] + 1;
            q_j.push({nx,ny});
        }
    }
    cout << "IMPOSSIBLE";
    return 0;
}*/
//TODO: j의 위치가 r이나 c로 넘어가면 탈출 성공
#include <bits/stdc++.h>
using namespace std;
#define x first
#define y second
string s[1002];
int dx[4] = {-1, 0 ,1, 0};
int dy[4] = {0, 1, 0, -1};
int position[1002][1002];
int fire[1002][1002];
int n, m;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    queue<pair<int, int>> Q;
    queue<pair<int, int>> F;
    cin >> n >> m;
    for(int i=0;i<n;i++)
        fill(fire[i], fire[i]+m,-1);
    for(int i=0;i<n;i++)
        fill(position[i], position[i]+m,-1);
    for (int i = 0; i < n; i++) {
        cin >> s[i];
        for (int j = 0; j < m; j++) {
            if (s[i][j] == 'J') {
                Q.push({i, j});
                position[i][j]=0;
            }

            else if (s[i][j] == 'F') {
                F.push({i, j});
                fire[i][j]=0;
            }

        }
    }

    while (!F.empty()) {
        auto cur = F.front();
        F.pop();
        for (int dir = 0; dir < 4; dir++) {
            int nx = cur.x + dx[dir];
            int ny = cur.y + dy[dir];
            if (nx >= n || nx < 0 || ny >= m || ny < 0) continue;
            if (fire[nx][ny] >= 0 | s[nx][ny] == '#') continue;
            fire[nx][ny] = fire[cur.x][cur.y] + 1;
            F.push({nx, ny});
        }
    }

    while (!Q.empty()) {
        auto cur = Q.front();
        Q.pop();
        for (int dir = 0; dir < 4; dir++) {
            int nx = cur.x + dx[dir];
            int ny = cur.y + dy[dir];
            if (nx >= n || nx < 0 || ny >= m || ny < 0) {
                cout << position[cur.x][cur.y] + 1;
                return 0;
            }
            if (position[nx][ny] >= 0 | s[nx][ny] == '#') continue;
            if (fire[nx][ny]!=-1 && position[cur.x][cur.y] +1>= fire[nx][ny] ) continue;
            position[nx][ny] = position[cur.x][cur.y] + 1;
            Q.push({nx, ny});
        }
    }
    cout << "IMPOSSIBLE";
}



