#include <bits/stdc++.h>
using namespace std;

void func(int a, int b, int n) {
    if(n == 1) {
        cout << a << " " << b << '\n';
        return;
    }
    func(a, 6-a-b, n-1);
    cout << a << " " << b << '\n';
    func(6-a-b, b, n-1);
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n; cin >> n;
    cout << (1 << n ) -1 << "\n"; // 1을 비트 기준 왼쪽으로 k칸 밀어 라는 의미 (2^n)이 됨
    func(1,3,n);
}