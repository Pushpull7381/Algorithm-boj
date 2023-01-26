#include "bits/stdc++.h"
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    string s;
    stack<int> st;
    int N, M, tmp=0; cin >> N;
    for(int i=0;i<N;i++) {
        cin >> M; // 입력받는 수
        if(M>tmp) { // + 출력
            while(M>tmp) {
                st.push(++tmp);
                s += "+";
            }
            s+="-";
            st.pop();
        }
        else {
            bool check = false;
            if(!st.empty()) {
                if(M==st.top()) {
                    check=true;
                }
                s+="-";
                st.pop();
            }
            if(!check){
                cout << "NO\n";
                return 0;
            }
        }
    }
    for(auto n : s) {
        cout << n << '\n';
    }
}