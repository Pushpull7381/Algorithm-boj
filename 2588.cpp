#include "bits/stdc++.h"
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int a, b;

    cin >> a >> b;
    cout << a * (b % 10) << '\n';    //3번에 해당하는 코드
    cout << a*((b / 10)%10) << '\n';  //4번에 해당하는 코드
    cout << a * (b / 100) << '\n';   //5번에 해당하는 코드
    cout << a * b << '\n';            //6번에 해당하는 코드

}