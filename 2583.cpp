#include <bits/stdc++.h>
using namespace std;
#define x first
#define y second
int paper[102][102];
int visited[102][102];
int M, N, K, X[2], Y[2], siz;
int dx[4] = {0, 1, 0, -1};
int dy[4] = {1, 0, -1, 0};
priority_queue<int,vector<int>,greater<int>> pq;
void bfs(int i, int j) {
    siz = 1;
    queue<pair<int,int>> q;
    q.push({i,j});
    visited[i][j]=1;
    while(!q.empty()) {
        auto cur = q.front(); q.pop();
        for(int k=0;k<4;k++) {
            int nx = cur.x + dx[k];
            int ny = cur.y + dy[k];
            if(nx < 0 || nx >= M || ny < 0 || ny >= N) continue;
            if(visited[nx][ny]==1) continue;
            if(paper[nx][ny]!=1) {
                siz++;
                visited[nx][ny] = 1;
                q.push({nx, ny});
            }
        }
    }
    pq.push(siz);
}
int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    cin >> M >> N >> K;
    while(K--) {
        cin >> X[0] >> Y[0] >> X[1] >> Y[1];
        for(int i=Y[0];i<Y[1];i++) {
            for(int j = X[0]; j<X[1];j++) {
                paper[i][j] = 1;
            }
        }
    }
    for(int i=0;i<M;i++) {
        for(int j=0;j<N;j++) {
            if(visited[i][j]==0 && paper[i][j]==0) {
                bfs(i, j);
            }
        }
    }

    cout << pq.size() << "\n";
    while(!pq.empty()) {
        cout << pq.top() << " ";
        pq.pop();
    }
}