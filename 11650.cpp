#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    int N; cin >> N;
    vector <vector <int>> arr(N, vector<int>(2,0));
    for(int i=0;i<N;i++) {
        cin >> arr[i][1];
        cin >> arr[i][0];
    }
    sort(arr.begin(),arr.end());
    for(int i=0;i<N;i++) {
        cout << arr[i][1] << " " << arr[i][0] << '\n';
    }
}