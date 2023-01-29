#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int arr[7];
    vector<int> odd;
    for(int i=0;i<7;i++) {
        cin >> arr[i];
    }
    sort(arr,arr+7);
    int count=0;
    for(int i=0;i<7;i++) {
        if(arr[i]%2==1) {
            count++;
            odd.push_back(arr[i]);
        }
    }

    int sum=0;
    for(int i=0;i<odd.size();i++) {
        sum+=odd[i];    
    }

    if(count==0) {
        cout << "-1" << '\n';
    }
    else {
        cout << sum << '\n' << odd[0];
    }
}