#include <iostream>
using namespace std;

int main() {
    int TestCase;
    cin >> TestCase;
    int Width, Height, N;
    
    for(int i=0;i<TestCase;i++) {
        cin >> Height >> Width >> N;
        
        if(N % Height == 0) {
            cout<< Height;
            cout.width(2);
            cout.fill('0');
            cout << N/Height;  
        }
        else {
            cout << N % Height;

            cout.width(2);
            cout.fill('0');
            cout << N/Height+1;       
        }
        cout << endl;
    }
}

