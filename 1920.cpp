#include <bits/stdc++.h>
using namespace std;

void findValue(vector<int> arr, int x){
    int m = arr[arr.size()/2];
    if(m < x) {

    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N, M, x; cin >> N;
    vector<int> arr;
    while(N--) {
        cin >> x;
        arr.push_back(x);
    }
    sort(arr.begin(), arr.end());
    cin >> M;
    while(M--) {
        cin >> x;
        bool chk = false;
        for(int i=0;i<arr.size();i++) {
            if(arr[i]==x){
                chk = true;
                break;
            }
        }
        if(chk) cout << "1\n";
        else cout << "0\n";
    }

}