#include <iostream>
using namespace std;

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    
    int arr[10001] ={0};
    int N, M;
    cin >> N;
    for(int i=0;i<N;i++) {
        cin >> M;
        arr[M]+=1;
    }
    for(int i=1;i<10001;i++) {
        for(int j=0;j<arr[i];j++) {
            cout << i << "\n";
        }
    }
}