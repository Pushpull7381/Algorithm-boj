#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N, x;
    int check = 0;
    float sum = 0;
    cin >> N;
    vector<float> sub(N, 0);
    for (int i = 0; i < N; i++) {
        cin >> sub[i];
        if(check < sub[i]) {
            check = sub[i];
        }
    }
    for (int i = 0; i < N;i++) {
        sum = sum + sub[i] / check * 100;
    }
        cout << sum/N;
}