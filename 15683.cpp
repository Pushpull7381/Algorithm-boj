#include <bits/stdc++.h>
using namespace std;

int n, m, min;
int office[10][10];
bool visited[10][10];
int dx[4] = {-1,0,1,0};
int dy[4] = {0,1,0,-1};
vector<pair<int,int>> cctv[5];

void backTracking(int cnt) {
    if()
}

void findBlindSpot(int k) {



}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> m;
    for(int i=0;i<n;i++) {
        for(int j=0;j<m;j++) {
            cin >> office[i][j];
            if(office[i][j] == 1)
                cctv[0].push_back({i,j});
            else if(office[i][j] == 2)
                cctv[1].push_back({i,j});
            else if(office[i][j] == 3)
                cctv[2].push_back({i,j});
            else if(office[i][j] == 4)
                cctv[3].push_back({i,j});
            else if(office[i][j] == 5)
                cctv[4].push_back({i,j});
        }
    }



}