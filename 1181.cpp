#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool compareWith(string a, string b){
    if(a.length() == b.length()) {
        return a<b;
    }
    return a.length()<b.length();
}

int main() {
    int N;
    int check=0;
    int max=0;
    cin >> N;
    vector<string> st;
    vector<string> vec(N);  
    for(int i=0;i<N;i++) {
        cin >> vec[i];
    if(find(st.begin(), st.end(), vec[i]) == st.end()) {
        st.push_back(vec[i]);
    }
    }
    sort(st.begin(), st.end(), compareWith);
    for(int i=0; i<st.size(); i++){
        cout<<st[i]<<'\n';
    }
    return 0;
}