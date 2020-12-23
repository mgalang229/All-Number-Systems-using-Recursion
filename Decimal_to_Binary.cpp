#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

void solve(int n) {
	if(n) {
		solve(n/2);
		cout << n%2;
	}
}

int main() {
	int n;
	cin >> n;
	solve(n);
	cout << "\n";
}
