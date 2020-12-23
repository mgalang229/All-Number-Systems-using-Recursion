#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

//int d=0, rem=0, i=0;

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

int d=0, b=1;

int solve(string s, int i) {
	if(i>=0) {
		if(s[i]>='0'&&s[i]<='9')
			d+=(s[i]-48)*b;
		else if(s[i]>='A'&&s[i]<='F')
			d+=(s[i]-55)*b;
		else if(s[i]>='a'&&s[i]<='f')
			d+=(s[i]-87)*b;
		b*=16;
		solve(s, i-1);
	}
	return d;
}

int main() {
	string s;
	cin >> s;
	int id=(int)s.size()-1;
	cout << solve(s, id) << "\n";
}
