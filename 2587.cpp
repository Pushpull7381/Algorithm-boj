#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int arr[5];
    for(int i=0;i<5;i++) {
        cin >> arr[i];
    }
    sort(arr,arr+5);

    int sum=0;
    for(int i=0;i<5;i++) {
        sum+=arr[i];
    }
    cout << sum/5 << '\n' << arr[2];   
}