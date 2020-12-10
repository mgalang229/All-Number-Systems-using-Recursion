#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace std;
using namespace __gnu_pbds;

#define ll long long
#define ar array

typedef tree<int, null_type, less<int>, rb_tree_tag,
tree_order_statistics_node_update> indexed_set;

int d=0, rem=0, i=0;

int power(int a, int b) {
	int res=1;
	while(b>0) {
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
		d+=rem*power(2, i++);
		solve(n/10);
	}
	return d;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	
	ll n;
	cin >> n;
	cout << solve(n) << "\n";
}
