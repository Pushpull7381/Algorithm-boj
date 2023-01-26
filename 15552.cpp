#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    int a, b;
    int N; cin >> N;
    for(int j=0;j<N;j++) {
        cin >> a >> b;
        cout << a+b << '\n';
    }
}
