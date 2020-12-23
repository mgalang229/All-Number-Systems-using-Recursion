#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

void solve(int n) {
	if(n) {
		solve(n/8);
		cout << n%8;
	}
}

int main() {
	int n;
	cin >> n;
	solve(n);
	cout << "\n";
}
