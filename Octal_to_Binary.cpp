#include <bits/stdc++.h>

using namespace std;

int d = 0;
int rem = 0;
int i = 0;

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

int Solve(int n) {
	if (n > 0) {
		rem = n % 10;
		d += rem * Power(8, i++);
		Solve(n / 10);
	}
	return d;
}

void Solve2(int n) {
	if (n > 0) {
		Solve2(n / 2);
		cout << n % 2;
	}
}

int main() {
	// octal to decimal to binary process
	int n;
	cin >> n;
	Solve2(Solve(n));
	cout << '\n';
	return 0;
}
