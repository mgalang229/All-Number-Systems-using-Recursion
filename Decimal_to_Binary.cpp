#include <bits/stdc++.h>

using namespace std;

void Solve(int n) {
	if (n > 0) {
		Solve(n / 2);
		cout << n % 2;
	}
}

int main() {
	int n;
	cin >> n;
	Solve(n);
	cout << '\n';
	return 0;
}
