#include <bits/stdc++.h>

using namespace std;

int d = 0;
int b = 1;

int Solve(string s, int i) {
	if (i >= 0) {
		if (s[i] >= '0' && s[i] <= '9') {
			d += (s[i] - 48) * b;
		} else if (s[i] >= 'A' && s[i] <= 'F') {
			d += (s[i] - 55) * b;
		} else if (s[i] >= 'a' && s[i] <= 'f') {
			d += (s[i] - 87) * b;
		}
		b *= 16;
		Solve(s, i - 1);
	}
	return d;
}

void Solve2(int n) {
	if (n > 0) {
			Solve2(n / 8);
			cout << n % 8;
	}
}

int main() {
	// hexadecimal to decimal to octal process
	string s;
	cin >> s;
	int id = (int) s.size() - 1;
	Solve2(Solve(s, id));
	cout << '\n';
	return 0;
}
