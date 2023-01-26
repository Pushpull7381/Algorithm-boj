#include "bits/stdc++.h"
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N, M, l, cnt=0; cin >> N >> M;
    deque<int> q;
    for(int i=1;i<=N;i++) q.push_back(i);
    for(int i=0;i<M;i++) {
        int idx = 0;
        cin >> l;
        for(int j=0;j<q.size();j++) {
            if(q[j]!=l) idx++;
            else break;
        }
        if(idx<=(q.size())/2) {
            while(q.front()!=l) {
                q.push_back(q.front());
                q.pop_front();
                cnt++;
            }
            q.pop_front();
        }
        else {
            while(q.back()!=l) {
                q.push_front(q.back());
                q.pop_back();
                cnt++;
            }
            q.push_front(q.back());
            q.pop_back();
            cnt++;
            q.pop_front();
        }
    }
    cout << cnt;
}