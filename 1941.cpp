#include <bits/stdc++.h>
using namespace std;

string s[5];
int result;
int a[25];
int dx[4] = {-1, 0, 1, 0};
int dy[4] = {0, 1, 0, -1};
int visited[6][6];
int solidarity[6][6];

void bfs(int x, int y) {
    queue<pair<int,int>> q;
    q.push({x,y});
    visited[x][y] = 1;
    while(!q.empty()) {
        auto cur = q.front(); q.pop();
        for(int dir=0;dir<4;dir++) {
            int nx = cur.first + dx[dir];
            int ny = cur.second + dy[dir];
            if(nx < 0 || ny < 0 || nx > 4 || ny > 4) continue;
            if(visited[nx][ny]) continue;
            if(solidarity[nx][ny]==1) {
                q.push({nx,ny});
                visited[nx][ny] = 1;
            }
        }
    }
}
void seven_princess(queue<pair<int,int>> q) {
    int cnt = 0;
    for(int i=0;i<5;i++) fill(solidarity[i],solidarity[i]+5,0);
    for(int i=0;i<5;i++) fill(visited[i],visited[i]+5,0);
    while(!q.empty()) {
        auto cur = q.front(); q.pop();
        solidarity[cur.first][cur.second] = 1;
    }
    for(int i=0;i<5;i++) {
        for(int j=0;j<5;j++) {
            if(!visited[i][j] && solidarity[i][j]==1) {
                bfs(i,j);
                cnt++;
            }
        }
    }
    if(cnt==1) result++;
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    for(int i=0;i<5;i++)
        cin >> s[i];
    fill(a+18,a+25,1);
    do{
        int cnt=0;
        queue<pair<int,int>> q;
        for(int i=0;i<25;i++) {
            if(a[i] == 1) {
                q.push({i / 5,i % 5});
                if(s[i/5][i%5]=='S') cnt++;
            }
        }
        if(cnt>=4) seven_princess(q);
    } while(next_permutation(a,a+25));
    cout << result;
}