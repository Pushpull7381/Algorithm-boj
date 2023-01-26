#include "bits/stdc++.h"
using namespace std;

#define X first
#define Y second
int T, N, M, K, x, y, cnt;
int dx[4] = {1,0,-1,0};
int dy[4] = {0,1,0,-1};
int cabbage[52][52];
int visited[52][52];

void bfs(int i, int j) {
    queue<pair<int,int>> Q;
    Q.push({i,j});
    while(!Q.empty()) {
        auto cur = Q.front();
        Q.pop();
        for (int dir = 0; dir < 4; dir++) {
            int nx = cur.first + dx[dir];
            int ny = cur.second + dy[dir];
            if (nx < 0 || nx >= N || ny < 0 || ny >= M) continue;
            if (visited[nx][ny]==1) continue;
            if(cabbage[nx][ny]==1) {
                Q.push({nx,ny});
                visited[nx][ny]=1;
            }
        }
    }

}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> T;
    while(T--) {
        cnt=0;
        for(int i=0;i<52;i++) fill(cabbage[i],cabbage[i]+51,0);
        for(int i=0;i<52;i++) fill(visited[i],visited[i]+51,0);


        cin >> N >> M >> K;
        while(K--) {
            cin >> x >> y;
            cabbage[x][y] = 1;
        }
//        for(int i=0;i<N;i++) {
//            for(int j=0;j<M;j++) {
//                cout << cabbage[i][j] << " ";
//            }
//            cout << "\n";
//        }

        for(int i=0;i<N;i++) {
            for(int j=0;j<M;j++) {
                if(cabbage[i][j]==1) {
                    if(visited[i][j]==0) {
                        cnt++;
                        bfs(i,j);
                    }
                }
            }
        }
        cout << cnt << "\n";

    }


}