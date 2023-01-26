#include <bits/stdc++.h>
using namespace std;
#define x first
#define y second
int notRedGreen[102][102];
int redGreen[102][102];
char board[102][102];
int dx[4] = {-1, 0, 1, 0};
int dy[4] = {0, 1, 0, -1};
int N, redGreenCnt, notRedGreenCnt;

void redGreenFunc(int i, int j, char color) {
    queue<pair<int,int>> Q;
    Q.push({i, j});
    while(!Q.empty()) {
        auto cur = Q.front(); Q.pop();
        for(int k=0;k<4;k++) {
            int nx = cur.x + dx[k];
            int ny = cur.y + dy[k];
            if(nx < 0 || nx >= N || ny < 0 || ny >= N) continue;
            if(redGreen[nx][ny]==1) continue;
            if((color == 'G' || color == 'R') && board[nx][ny]!='B' || (color == 'B' && board[nx][ny] == 'B')) {
                redGreen[nx][ny] = 1;
                Q.push({nx, ny});
            }
        }
    }
}

void notRedGreenFunc(int i, int j) {
    queue<pair<int, int>> Q;
    Q.push({i,j});
    while(!Q.empty()) {
        auto cur = Q.front(); Q.pop();
        for(int k=0;k<4;k++) {
            int nx = cur.x + dx[k];
            int ny = cur.y + dy[k];
            if(nx < 0 || nx >= N || ny < 0 || ny >= N) continue;
            if(notRedGreen[nx][ny]==1) continue;
            if(board[cur.x][cur.y] == board[nx][ny]) {
                notRedGreen[nx][ny] = 1;
                Q.push({nx, ny});
            }
        }
    }
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N;
    for(int i=0;i<102;i++) fill(board[i],board[i]+101,48);
    for(int i=0;i<N;i++) {
        for(int j=0;j<N;j++) {
            cin >> board[i][j];
        }
    }
    // 적록색약인 사람 먼저 redGreen
    for(int i=0;i<N;i++) {
        for(int j=0;j<N;j++) {
            if(redGreen[i][j]==0) {
                redGreen[i][j] = 1;
                redGreenFunc(i, j, board[i][j]);
                redGreenCnt++;
            }
        }
    }

    for(int i=0;i<N;i++) {
        for(int j=0;j<N;j++) {
            if(notRedGreen[i][j]==0) {
                notRedGreen[i][j] = 1;
                notRedGreenFunc(i, j);
                notRedGreenCnt++;
            }
        }
    }
    cout << notRedGreenCnt << " " << redGreenCnt;
}
