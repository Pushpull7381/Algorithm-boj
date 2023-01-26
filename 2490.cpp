#include <bits/stdc++.h>
using namespace std;

int main() {
    for(int i=0;i<3;i++) {
        int arr[4];
        int count=0;
        for(int j=0;j<4;j++) {
            cin >> arr[j];
            count+= arr[j];
        }
        
        string result = "DCBAE";
        cout << result[count] << '\n';
    }  
}