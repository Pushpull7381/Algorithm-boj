#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

int factorial(int num) {
    int result = 1;
    for(int i=1;i<=num;++i) {
        result=result*i;
    }
    return result;
}

void recursion(int num,vector<int> li, int size) {
    int siz = li.size();

}
int main() {
    int T; int N;
    cin >> T;
    while(T--) {
        int cnt = 0;
        cin >> N;
        vector<int> arr(N,0);
        for(int i=0;i<N;i++) {
            cin >> arr[i];
        }
        int n = arr[0];
        arr.erase(arr.begin());
        if(sqrt(1+9)==(int)sqrt(1+9)) cout << "wor";
        else cout  <<"aaa";
        recursion(n, arr, arr.size()+1);
    }
}
