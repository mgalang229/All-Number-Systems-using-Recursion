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

int main() {
	int n;
	cin >> n;
	cout << solve(n) << "\n";
}
