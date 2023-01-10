#include "bits/stdc++.h"
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N; cin >> N;
    queue<int> card;
    for(int i=1;i<=N;i++) {
        card.push(i);
    }
    while(card.size()-1) {
        card.pop();
        card.push(card.front());
        card.pop();
    }
    cout << card.front();

}