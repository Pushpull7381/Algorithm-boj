#include <bits/stdc++.h>
using namespace std;

#define x first
#define y second
int dx[8] = {-2, -1, 1, 2, 2, 1, -1, -2};
int dy[8] = {1, 2, 2, 1, -1, -2, -2, -1};
int l, T;
int knight[2];
int position[2];
int visited[302][302];

int main() {
    cin >> T;
    while(T--) {
        cin >> l;
        cin >> knight[0] >> knight[1];
        cin >> position[0] >> position[1];

        for(int i=0;i<302;i++) fill(visited[i],visited[i]+301,0);
        queue<pair<int,int>> Q;
        Q.push({knight[0],knight[1]});
        while(!Q.empty()) {
            auto cur = Q.front(); Q.pop();
            if(cur.x == position[0] && cur.y == position[1]) {
                cout << visited[position[0]][position[1]] << "\n";
                break;
            }
            for(int i=0;i<8;i++) {
                int nx = cur.x + dx[i];
                int ny = cur.y + dy[i];
                if(nx < 0 || nx >= l || ny < 0 || ny >= l) continue;
                if(visited[nx][ny]!= 0) continue;
                visited[nx][ny] = visited[cur.x][cur.y] + 1;
                Q.push({nx,ny});
            }
        }

    }

}