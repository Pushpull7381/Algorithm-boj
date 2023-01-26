#include <iostream>
using namespace std;

int main()
{
    int N, M;
    cin >> N >> M;
    N = N / 100 + (N / 10) % 10 * 10 + N % 10 * 100;
    M = M / 100 + (M / 10) % 10 * 10 + M % 10 * 100;
    if (N > M)
    {
        cout << N;
    }
    else
        cout << M;
}
