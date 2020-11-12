#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace std;
using namespace __gnu_pbds;

#define ll long long
#define ar array

typedef tree<int, null_type, less<int>, rb_tree_tag,
tree_order_statistics_node_update> indexed_set;

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

void solve2(int n) {
	if(n) {
		solve2(n/8);
		cout << n%8;
	}
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	string s;
	cin >> s;
	int id=(int)s.size()-1;
	solve2(solve(s, id));
	cout << "\n";
}
