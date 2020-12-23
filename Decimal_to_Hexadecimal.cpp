#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

void solve(int n) {
	if(n) {
		int tmp=n%16;
		solve(n/16);
		if(tmp<10)
			cout << char(48+tmp);
		else
			cout << char(55+tmp);
	}
}

int main() {
	int n;
	cin >> n;
	solve(n);
	cout << "\n";
}
