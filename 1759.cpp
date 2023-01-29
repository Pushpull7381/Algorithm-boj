#include <bits/stdc++.h>
using namespace std;

int l, c;
char arr[15];
bool visited[15];
vector<char> v;

void makePW(int cnt, int idx) {
    if(cnt == l) {
        int cnt1 = 0;
        int cnt2 =0;
        for(int i=0;i<l;i++) {
            if(arr[i] == 'a' || arr[i] == 'e' || arr[i] == 'i' || arr[i] == 'o' || arr[i] == 'u') {
                cnt1++;
            }
            else
                cnt2++;

        }
        if(cnt1>0 && cnt2 >1) {
            for(int i=0;i<l;i++)
                cout << arr[i];
            cout << '\n';
        }
        return;

    }
    for(int i=idx;i<c;i++) {
        if(!visited[i]) {
            arr[cnt] = v[i];
            visited[i] = 1;

            makePW(cnt+1, i+1);
            visited[i] = 0;
        }
    }
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> l >> c;
    char ch;
    for(int i=0;i<c;i++) {
        cin >> ch;
        v.push_back(ch);
    }
    sort(v.begin(),v.end());
    makePW(0,0);
}
