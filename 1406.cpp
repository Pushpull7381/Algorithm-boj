//#include <bits/stdc++.h>
//
//using namespace std;
//
//int main() {
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    string init;
//    cin >> init;
//    list<char> L;
//    for (auto c: init) L.push_back(c); // init의 문자들을 L에 하나씩 넣어줌
//    auto cursor = L.end(); // cursor를 end로 보내줌(마지막 글자가 cursor가 됨)
//    int M;
//    cin >> M;
//    for (int i = 0; i < M; i++) {
//        char cmd;
//        cin >> cmd;
//        if (cmd == 'P') { // 문자 뒤에 추가
//            char add;
//            cin >> add;
//            L.insert(cursor, add); // list.insert(iterator, 넣을값) -> iterator는 원래 가르키던 값을 가리킨다고 보면 된다.
//        } else if (cmd == 'L') { // 왼쪽으로 커서 이동
//            if(cursor!=L.begin()) cursor--; // 예외처리를 해줘야 된다.
//        } else if (cmd == 'B') { // 왼쪽 문자를 지움
//            if(cursor != L.begin()) {
//                cursor--;
//                cursor = L.erase(cursor); // erase는 제거한 다음 원소를 반환
//            }
//        } else if (cmd == 'D') { // 오른쪽으로 커서 이동
//            if(cursor!=L.end()) cursor++; // 예외처리 해줘야됨.
//        }
//    }
//    for(auto c:L) cout << c;
//}
//

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    string init;
    cin >> init;
    list<char> L;
    for(auto c: init) L.push_back(c);
    auto cursor = L.end();
    int q;
    cin >> q;
    while(q--) {
        char op;
        cin >> op;
        if(op == 'P'){
            char add;
            cin >> add;
            L.insert(cursor,add);
        }
        else if(op=='L') {
            if(cursor != L.begin()) cursor--;
        }
        else if(op == 'D') {
            if(cursor!=L.end()) cursor++;
        }
        else {
            if(cursor!=L.begin()) {
                cursor--;
                cursor = L.erase(cursor);
            }
        }
    }
    for(auto c: L) cout << c;

}