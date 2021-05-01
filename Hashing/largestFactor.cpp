#include <iostream>
#include <algorithm>
#include <map>
#define ll long long
#define MOD 1000000007
#define tc(i,t) for( int i=0; i<t; i++ )
#define rep(i,n) for( ll i=0; i<n; i++)
#define rep11(i,n) for( ll i=1; i<n; i++)
#define rep1(i,m) for( ll i=0; i<m; i++)
#define repr(i,n) for( ll i=n-1; i>=0; i-- )
#define p(i) cout << i << endl
using namespace std;
int smallestFactor(ll n){
	int i=2;
	while (i<=n/2){
		if(n%i == 0)
			return i;
		else 
			i++;
	}
}
int main(int argc, char const *argv[])
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin >> t;
	tc(y,t){
		ll n;
		cin >> n;
		if(n%2 == 0 )
			cout << n/2 << " " << n/2 << endl;
		else{
				int x = smallestFactor(n);
				cout << n/x << " " << n-n/x << endl;
		}
	}
	return 0;
}