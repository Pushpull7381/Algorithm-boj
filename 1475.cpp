#include "bits/stdc++.h"
using namespace std;

/*int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int num[10]={0,0,0,0,0,0,0,0,0};
    string st;
    cin >> st;
    int len = st.size();
    for(int i=0;i<len;i++){
        if(st[i]=='6' || st[i]=='9') num[9]++;
        else num[st[i]-'0']++;
    }

    if(num[9]%2==1) num[9]=num[9]/2+1;
    else num[9] = num[9]/2;
    int max=num[0];

    for(int i=1;i<10;i++) {
        if(max<num[i]) max=num[i];
    }
    cout << max;
}*/
// bacccking dog code
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N , a[10] = {}, ans = 1;
    cin >> N;

    while(N) {
        a[N%10]++;
        N/=10;
    }

    for(int i=0;i<10;i++) {
        if(i==6 || i==9)continue; // 나중에 비교
        ans = max(ans, a[i]);
    }
    ans = max(ans,(a[6]+a[9]+1)/2);
    cout << ans;
}