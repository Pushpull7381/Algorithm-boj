//#include "bits/stdc++.h"
//using namespace std;
//
//int main() {
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    stack<int> sta;
//    int N;
//    cin >> N;
//    while(N--) {
//        string cmd;
//        cin >> cmd;
//        if(cmd == "push") {
//            int i;
//            cin >> i;
//            sta.push(i);
//        }
//        else if(cmd == "pop") {
//            if(sta.size()!=0) {
//                cout << sta.top() << "\n";
//                sta.pop();
//            }
//            else cout << "-1\n";
//        }
//        else if (cmd=="size") {
//            cout << sta.size() << "\n";
//        }
//        else if(cmd == "empty") {
//            if(sta.size()==0) cout << "1\n";
//            else cout << "0\n";
//        }
//        else if(cmd == "top") {
//            if(sta.size()!=0) cout << sta.top() << '\n';
//            else cout << "-1\n";
//        }
//    }
//}

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N;
    cin >> N;
    string s;
    stack<int> st;
    while(N--) {
        cin >> s;
        if(s == "push") {
            int x;
            cin >> x;
            st.push(x);
        }
        else if( s == "pop") {
            if(st.empty()) cout << -1 << "\n";
            else {
                cout << st.top() << "\n";
                st.pop();
            }
        }
        else if(s == "size") {
            cout << st.size() << "\n";
        }
        else if(s == "empty") {
            if(st.empty()) cout << 1 << "\n";
            else cout << "0\n";
        }
        else if(s == "top") {
            if(st.empty()) cout << -1 << "\n";
            else cout << st.top() << "\n";
        }
    }
}