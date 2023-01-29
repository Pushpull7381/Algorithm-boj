#include <bits/stdc++.h>
using namespace std;
#define x first
#define y second
int glacier[302][302];
int visited[302][302];
bool chk[302][302];
int dx[4] = {-1, 0, 1, 0};
int dy[4] = {0, 1, 0, -1};
int N, M, cnt, total;


void bfs(int i, int j) {
    queue<pair<int,int>> Q;
    Q.push({i,j});

    while(!Q.empty()) {
        auto cur = Q.front(); Q.pop();
        chk[cur.x][cur.y] = true;

        for(int k=0;k<4;k++) {
            int nx = cur.x + dx[k];
            int ny = cur.y + dy[k];
            if(nx < 0 || nx >= N || ny < 0 || ny >= M) continue;
            if(glacier[nx][ny]==0) {
                visited[cur.x][cur.y]++;
            }
            else if(glacier[nx][ny]!=0 && chk[nx][ny]==false) {
                Q.push({nx,ny});
                chk[nx][ny] = true;
            }
        }

    }
}


int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);
    cin >> N >> M;
    for(int i=0;i<N;i++) {
        for(int j=0;j<M;j++) {
            cin >> glacier[i][j];
        }
    }
    for(int i=0;i<N;i++) fill(chk[i],chk[i]+M-1,false);

    do {
        cnt = 0;
        for(int i=0;i<N;i++) {
            for(int j=0;j<M;j++) {
                if(glacier[i][j]!=0 && chk[i][j]==false) {
                    bfs(i, j);
                    cnt++;
                }
            }
        }
        if(cnt==1) {
            for (int i = 0; i < N; i++) {
                for (int j = 0; j < M; j++) {
                    if (glacier[i][j] - visited[i][j] < 0) glacier[i][j] = 0;
                    else glacier[i][j] -= visited[i][j];
                }
            }
        }

        for(int i=0;i<N;i++) fill(visited[i],visited[i]+M-1,0);
        for(int i=0;i<N;i++) fill(chk[i],chk[i]+M-1,false);

        if(cnt == 0) {
            cout << cnt;
            return 0;

        }



        total++;
    } while(cnt== 1);

    cout << total-1 << "\n";


    return 0;


}