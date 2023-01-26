#include "bits/stdc++.h"
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T; cin >> T;
    while(T--) {
        string fun; cin >> fun;
        int siz; cin >> siz;
        string li; cin >> li;
        deque<int> q;
        bool isReverse = false, isError = false;

        string str="";

        for(int i=0;i<li.size();i++) {
            if(isdigit(li[i])) str+=li[i];
            else {
                if(!str.empty()){
                    int tmp = stoi(str);
                    q.push_back(tmp);
                    str.clear();
                }
            }
        }
        for(int i=0;i<fun.size();i++) {
            if(fun[i]=='R') {
                isReverse = !isReverse;
            }
            else if(fun[i]=='D') {
                if(q.empty()){
                    isError=true;
                    break;

                }
                if (isReverse) {
                    q.pop_back();
                } else {
                    q.pop_front();
                }

            }
        }
        if(isError) cout << "error\n";
        else if(q.empty()) cout << "[]\n";
        else if(isReverse){
            cout << "[";
            while(q.size()>1) {
                cout << q.back() << ",";
                q.pop_back();
            }
            cout <<  q.back() << "]\n";
        }
        else if(!isReverse) {
            cout << "[";
            while(q.size()>1) {
                cout << q.front() << ",";
                q.pop_front();
            }
            cout<< q.front() << "]\n";
        }
    }
}