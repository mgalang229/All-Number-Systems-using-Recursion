#include <bits/stdc++.h>

using namespace std;

long long d = 0;
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

long long Solve(long long n) {
	if (n > 0) {
		rem = n % 10;
		d += rem * Power(2, i++);
		Solve(n / 10);
	}
	return d;
}

void Solve2(long long n) {
	if (n > 0) {
		Solve2(n / 8);
		cout << n % 8;		
	}
}

int main() {
	// binary to decimal to octal process
	long long n;
	cin >> n;
	Solve2(Solve(n));
	cout << '\n';
	return 0;
}
