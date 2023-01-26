#include <bits/stdc++.h>
using namespace std;

int main() {
	int ar[26] = { 0, };
	int cnt = 0;
	int max = 0;
	string c;
	cin >> c;
	transform(c.begin(), c.end(), c.begin(), (int(*)(int))toupper);
	for (int i = 0; i < sizeof(c); i++) {
		ar[c[i] - 'A']++;
	}
	for (int i = 0; i < 26; i++) {
		if (max < ar[i]) {
			max = ar[i];
			cnt = i;
		}
		else if (max == ar[i] && ar[i] > 0) {
			cout << "?";
			return 0;
		}
	}
	cout << char(cnt + 'A') << endl;
}