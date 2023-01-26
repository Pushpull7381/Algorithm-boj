#include "bits/stdc++.h"
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    stack<pair<int,int>> ans;
    vector<int> t;
    int N; cin >> N;
    int m;
    for(int i=0;i<N;i++){
        cin >> m;
        while(!ans.empty()) {
            if(ans.top().first<m) ans.pop();
            else {
                t.push_back(ans.top().second);
                ans.push(make_pair(m,i+1));
                break;
            }
        }
        if(ans.size()==0) {
            t.push_back(0);
            ans.push(make_pair(m,i+1));
        }


    }

    for(int i=0;i<t.size();i++) {
        cout << t[i] << ' ';
    }
}
