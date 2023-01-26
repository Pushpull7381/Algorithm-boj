#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int arr[9];
    int sum=0;
    for(int i=0;i<9;i++) {
        cin >> arr[i];
        sum+=arr[i];
    }
    int diff = sum-100;
    sort(arr,arr+9);
    int no[2];
    for(int i=0;i<8;i++) {
        for(int j=i+1;j<9;j++) {
            if(diff==(arr[i]+arr[j])) {
                no[0] = arr[i];
                no[1] = arr[j];
                goto outside;
            }
        }
    }
    outside:
    for(int i=0;i<9;i++) {
        if(arr[i]==no[0] || arr[i]==no[1]) continue;
        else cout << arr[i] << '\n';
    }
}