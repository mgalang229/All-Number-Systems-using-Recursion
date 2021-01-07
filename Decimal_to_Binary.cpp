#include <bits/stdc++.h>

using namespace std;

void Convert(long long n) {
	if (n > 0) {
		Convert(n / 2);
		cout << n % 2;
	}
}

int main() {
	long long n;
	cin >> n;
	Convert(n);
	cout << '\n';
	return 0;
}
