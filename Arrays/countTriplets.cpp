#include <iostream> 
#include <algorithm>
#define ll long long
#define MOD 1000000007
#define tc(i,t) for( int i=0; i<t; i++ )
#define rep(i,n) for( ll i=0; i<n; i++)
#define rep11(i,n) for( ll i=1; i<n; i++)
#define rep1(i,m) for( ll i=0; i<m; i++)
#define p(i) cout << i << endl
using namespace std;
int solve(ll a[], ll num, ll n){
	int x = 0;
	ll l=0, r=n-1;
	while( l<r ){
		if( a[l] + a[r] == num ){
			x++;
			l++;
		}
		else if ( a[l] + a[r] > num )
			r--;
		else
			l++;
	}
	return x;	
}
int main(int argc, char const *argv[])
{
	int t;
	cin >> t;
	tc(i,t){
		ll n;
		cin >> n;
		ll arr[n];
		rep(j,n){
			cin >> arr[j];
		}
		sort(arr,arr+n);
		int x=0;
		rep(i,n){
			x += solve(arr, arr[i], n);
		}
		if( x>0 ){
			cout << x << endl;
		}
		else{
			cout << -1 << endl;
		}
	}
	return 0;
}