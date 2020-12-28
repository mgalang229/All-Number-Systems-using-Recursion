#include <bits/stdc++.h>

using namespace std;

void Convert(int n) {
	if (n > 0) {
		Convert(n / 8);
		cout << n % 8;
	}
}

int main() {
	int n;
	cin >> n;
	Convert(n);
	cout << '\n';
	return 0;	
}
