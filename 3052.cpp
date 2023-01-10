#include <iostream>
using namespace std;

int main() {
    int cnt=0;
    int check[42]={0,};
    int arr[10]={0,};
    for(int i=0;i<10;i++) {
        cin >> arr[i];
        check[arr[i]%42]++;
    }
    for(int i=0;i<42;i++) {
        if(check[i]>0) {
            cnt++;
        }
    }
    if(cnt==0) {
        cout << cnt+1;
    }
    else {
        cout << cnt;
    }
}