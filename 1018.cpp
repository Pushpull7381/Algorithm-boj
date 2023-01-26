#include <iostream>
#include <vector>
using namespace std;

int main() {
    int M, N;
    cin >> M >> N;
    vector<vector<int>> chess;
    vector<int> width;

    chess.push_back(width);

    for(int i=0;i<M;i++) {
        for(int j=0;j<N;j++) {
            cin >> chess[i][j];
        }
    }

    for(int i=0;i<M;i++) {
        for(int j=0;j<N;j++) {
            cout << chess[i][j];
        }
        cout << endl;
    }
    

}