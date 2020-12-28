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

int Convert(int n) {
	if (n > 0) {
		rem = n % 10;
		d += rem * Power(8, i++);
		Convert(n / 10);
	}
	return d;
}

void Convert2(int n) {
	if (n > 0) {
		int tmp = n % 16;
		Convert2(n / 16);
		if (tmp < 10) {
			cout << char(48 + tmp);
		} else {
			cout << char(55 + tmp);
		}
	}
}

int main() {
	// octal -> decimal -> hexadecimal process
	int n;
	cin >> n;
	Convert2(Convert(n));
	cout << '\n';
	return 0;	
}
