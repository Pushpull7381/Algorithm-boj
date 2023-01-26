#include <bits/stdc++.h>
using namespace std;

#define x first
#define y second
int dx[4] = {-1, 0, 1, 0};
int dy[4] = {0, 1, 0, -1};

int T, w, h;
int visited[1002][1002];
bool fire[1002][1002];
queue<pair<int,int>> q_s;
queue<pair<int,int>> q_f;

int bfs() {
    while(!q_s.empty()) {
        int fire_size = q_f.size();
        while(fire_size--) {
            auto cur = q_f.front(); q_f.pop();
            for(int k=0;k<4;k++) {
                int nx = cur.x + dx[k];
                int ny = cur.y + dy[k];
                if(nx < 0 || nx >= h || ny < 0 || ny >= w) continue;
                if(visited[nx][ny]!=-1 && fire[nx][ny]==false) {
                    q_f.push({nx,ny});
                    fire[nx][ny] = true;
                }
            }
        }

        int s_size = q_s.size();
        while(s_size--) {
            auto cur = q_s.front();q_s.pop();
            for (int k = 0; k < 4; k++) {
                int nx = cur.x + dx[k];
                int ny = cur.y + dy[k];
                if (nx < 0 || nx >= h || ny < 0 || ny >= w) {
                    cout << visited[cur.x][cur.y] << "\n";
                    return 0;
                }
                if (visited[nx][ny] != 0) continue;
                if (visited[nx][ny] == 0 && fire[nx][ny] == false) {
                    q_s.push({nx, ny});
                    visited[nx][ny] = visited[cur.x][cur.y] + 1;
                }
            }
        }

    }
    cout << "IMPOSSIBLE\n";
    return 0;
}

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);
    cin >> T;
    while(T--) {
        string s[1002];
        while(!q_s.empty()) {
            q_s.pop();
        }
        while(!q_f.empty()) {
            q_f.pop();
        }
        for(int i=0;i<1002;i++) fill(visited[i],visited[i]+1001,-1);
        for(int i=0;i<1002;i++) fill(fire[i],fire[i]+1001,false);

        cin >> w >> h;
        for(int i=0;i<h;i++) {
            cin >> s[i];
            for(int j=0;j<w;j++) {
                if(s[i][j]=='@'){
                    q_s.push({i,j});
                    visited[i][j]=1;
                }
                else if(s[i][j] == '*') {
                    q_f.push({i,j});
                    fire[i][j] = true;
                }
                else if(s[i][j]=='#') {
                    visited[i][j] = -1;
                }
                else if(s[i][j]=='.') {
                    visited[i][j] = 0;
                }
            }
        }
        bfs();
    }
}