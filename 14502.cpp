#include <iostream>
#include <vector>
using namespace std;



int main() {
    int N, M;
    int* pN = &N;
    cin >> N >> M;
    vector<vector<int>> lab;
    int virus=0;

    for(int i=0;i<N;i++) {
        vector <int> row;
        for(int j=0;j<M;j++) {
            cin >> virus;
            row.push_back(virus);
        }
        lab.push_back(row);
    }
    cout << endl;
    int count=0;
    CheckVirus(lab,N, M);
}

void CheckVirus(vector<vector<int>> lab,  int N, int M) {
    for(int i=0;i<N;i++) {
        for(int j=0;j<M;j++) {
            if(lab[i][j]==2) {
                if(lab[i][j]==2) {
                    if(i==0 && j==0) {

                    }
                }
            }
        }
    }
    cout << "\n";
}