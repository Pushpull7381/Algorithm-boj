#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    int N;
    int check = 0;
    string _st;
    cin >> N;
    vector<string> st(N);
    vector<int> cnt(N, 0);
    for(int i=0;i<N;i++) {
        cin >> st[i];
    }
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; st[i].size(); j++)
        {
            _st=st[i];
            if(_st[i]='O')
            {
                cnt[i]++;
                cnt[i] += check;
                check++;
            }
            else
            {
                check = 0;
            }
        }
        cout << cnt[i] << "\n";
    }
}