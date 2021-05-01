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
bool at_pos(ll n, ll pos){
	bool bit = (n & (1<<pos));
	return bit;
}
int main(int argc, char const *argv[])
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin >> t;
	tc(y,t){
		double n;
		cin >> n;
		if (n == 0 )
			p(0);
		else{
			ll i=0;
			bool bit=0;
			rep(i,n){
				bool bit = at_pos(n,i);
				if( bit == 1){
					cout << (i+1) << endl;
					break;
				}
			}
		}
	}
	return 0;
}