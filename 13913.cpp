#include <bits/stdc++.h>
using namespace std;
int route[100002];
int N, K, cnt;

void backRoute() {
    stack<int> S;
    int cur = K;
    int prev = route[K];
    S.push(K);
    if(N != K) {
        cnt++;
        while(route[prev]!=-1) {
            S.push(route[cur]);
            cur = prev;
            prev = route[cur];
            cnt++;
        }
        S.push(N);
    }
    cout << cnt << "\n";
    while(!S.empty()) {
        cout << S.top() << " ";
        S.pop();
    }
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> N >> K;
    queue<int> Q;
    Q.push(N);
    fill(route,route+100001,-100);
    route[N] = -1;
    while(!Q.empty()) {
        int cur = Q.front(); Q.pop();
        if(cur == K) {
            backRoute();
            return 0;
        }
        int arr[3] = {cur-1, cur+1, cur*2};
        for(int i=0;i<3;i++) {
            if(arr[i] < 0 || arr[i] >= 100001) continue;
            if(route[arr[i]]!= -100) continue;
            route[arr[i]] = cur;
            Q.push(arr[i]);
        }
    }
}