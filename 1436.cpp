#include <iostream>
#include <string>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int Number;
    int check = 0;
    int title=665;
    
    cin >> Number;
    string title_to_string;
    while(++title) {
        title_to_string = to_string(title);
        if(title_to_string.find("666")!=-1) check++;
        if(Number == check) {
            cout << title;
            break;
        }
    }
}
