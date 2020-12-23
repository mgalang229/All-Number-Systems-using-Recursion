#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

int d=0, rem=0, i=0;

int power(int a, int b) {
	int res=1;
	while(b) {
		if(b&1)
			res*=a;
		a*=a;
		b/=2;
	}
	return res;
}

int solve(int n) {
	if(n) {
		rem=n%10;
		d+=rem*power(8, i++);
		solve(n/10);
	}
	return d;
}

void solve2(int n) {
	if(n) {
		solve2(n/2);
		cout << n%2;
	}
}

int main() {
	//octal->decimal->binary process
	int n;
	cin >> n;
	solve2(solve(n));
	cout << "\n";
}
