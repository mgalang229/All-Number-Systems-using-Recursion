#include <bits/stdc++.h>

using namespace std;

void Solve(int n) {
	if (n > 0) {
		int tmp = n % 16;
		Solve(n / 16);
		if (tmp< 10) {
			cout << char(48 + tmp);
		} else {
			cout << char(55 + tmp);
		}
	}
}

int main() {
	int n;
	cin >> n;
	Solve(n);
	cout << '\n';
	return 0;
}
