#include <iostream>
#include <bits/stdc++.h>
#define ll long long
#define ld long double
#define MOD 1000000007
#define tc(i,t) for( int i=0; i<t; i++ )
#define rep(i,n) for( ll i=0; i<n; i++)
#define rep11(i,n) for( ll i=1; i<n; i++)
#define rep1(i,m) for( ll i=0; i<m; i++)
#define repr(i,n) for( ll i=n-1; i>=0; i-- )
#define p(i) cout << i << endl
using namespace std;
int main(int argc, char const *argv[])
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin >> t;
	tc(y,t){
		ll p;
		ld a,b,c;
		cin >> p >> a >> b >> c;
		ll am = ceil(p/a)*a-p;
		ll bm = ceil(p/b)*b-p;
		ll cm = ceil(p/c)*c-p;
		ll fm = min(am,bm);
		fm =  min(fm, cm);
		p(fm);
	}
	return 0;
}