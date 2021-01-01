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
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int n;
	cin >> n;
	solve(n);
	cout << "\n";
}
