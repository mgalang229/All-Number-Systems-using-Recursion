#include <bits/stdc++.h>

using namespace std;

int Power(int a, int b) {
	int res = 1;
	while (b > 0) {
		if (b % 2 == 1) {
			res *= a;
		}
		a *= a;
		b /= 2;
	}
	return res;
}

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
