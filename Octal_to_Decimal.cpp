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

int d = 0;
int rem = 0;
int i = 0;

int Convert(int n) {
	if (n > 0) {
		rem = n % 10;
		d += rem * Power(8, i++);
		Convert(n / 10);
	}
	return d;
}

int main() {
	int n;
	cin >> n;
	cout << Convert(n) << '\n';
	return 0;
}
