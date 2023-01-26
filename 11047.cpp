#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N, K;
    cin >> N >> K;
    int arr[10]={0};
    for(int i=0;i<N;i++) {
        cin >> arr[i];
    }
    int count = 0;
    for(int j = N-1;j>=0;j--) {
        count += K/arr[j];
        K = K%arr[j];
    }
    cout << count;
} 