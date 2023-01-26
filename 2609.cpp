#include <iostream>
#include <algorithm>
using namespace std;


int gcd(int n, int m) {
    while(1) {
        if(n<m) {
            swap(n,m); // 항상 N이 더 크게
        }
        if(n%m==0) {
            return m;
        }
        n = n%m;
    } 
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int N, M;
    cin >> N >> M;
    cout << gcd(N, M) << '\n' << N/gcd(N,M) * M;

}