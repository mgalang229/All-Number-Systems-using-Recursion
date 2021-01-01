#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

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

int d=0, rem=0, i=0;

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
		int tmp=n%16;
		solve2(n/16);
		if(tmp<10)
			cout << char(48+tmp);
		else
			cout << char(55+tmp);
	}
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	//octal->decimal->hex process
	int n;
	cin >> n;
	solve2(solve(n));
	cout << "\n";
}
