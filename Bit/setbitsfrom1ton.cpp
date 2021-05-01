#include <bits/stdc++.h>
#include <algorithm>
#include <vector>
#define ll long long
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
		ll n;
		cin >> n;
		int ctr=0;
		rep11(i,n+1){
			ll x=i;
		while(x){
			x = x & (x-1);
			ctr++;
		}
	}
	ctr = ctr % MOD;
		p(ctr);
	}
	return 0;
}