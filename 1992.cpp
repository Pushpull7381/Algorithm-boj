#include <iostream>
//#include <queue>

using namespace std;
string s[64];
//queue<char> arr;

void quadTree(int n, int x, int y) {

    if(n==1) {
        cout << s[x][y];
        //arr.push(s[x][y]);
        return;
    }
    bool chk = true;
    char val = s[x][y];
    for(int i=x-n+1;i<=x;i++) {
        for(int j=y-n+1;j<=y;j++) {
            if(val != s[i][j]) {
                chk = false;
                break;
            }
        }
    }
    if(chk) {
        cout << val;
        //arr.push(val);
        return;
    }
    int k = n/2;
    cout << '(';
    //arr.push('(');
    quadTree(k,x-k,y-k);
    quadTree(k,x-k,y);
    quadTree(k,x,y-k);
    quadTree(k,x,y);
    cout << ')';
    //arr.push(')');
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n; cin >> n;
    for(int i=0;i<n;i++)
        cin >> s[i];
    quadTree(n,n-1,n-1);
//    while(!arr.empty()) {
//        cout << arr.front();
//        arr.pop();
//    }

}