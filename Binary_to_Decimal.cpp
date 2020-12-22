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

int main() {
	long long n;
	cin >> n;
	cout << Solve(n) << '\n';
	return 0;
}
