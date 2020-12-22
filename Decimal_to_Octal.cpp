#include <bits/stdc++.h>

using namespace std;

void Solve(int n) {
	if (n > 0) {
		Solve(n / 8);
		cout << n % 8;
	}
}

int main() {
	int n;
	cin >> n;
	Solve(n);
	cout << '\n';
	return 0;
}
