#include <iostream> 
#include <algorithm>
#include <vector>
#define ll long long
#define MOD 1000000007
#define tc(i,t) for( int i=0; i<t; i++ )
#define rep(i,n) for( ll i=0; i<n; i++)
#define rep11(i,n) for( ll i=1; i<n; i++)
#define rep1(i,m) for( ll i=0; i<m; i++)
#define p(i) cout << i << endl
using namespace std;
int main(int argc, char const *argv[])
{
	int t;
	cin >> t;
	tc(i,t){
		ll n;
		cin >> n;
		ll arr[n];
		vector<ll> v;
		rep(j,n){
			cin >> arr[j];
		}
		int l=n-2, r=n-1;
		v.push_back(arr[n-1]);
		while( r>=0 ){
			if ( r==l ){
				v.push_back(arr[l]);
				l--;
			}
			if ( arr[r] <= arr[l] && l<r){
				r--;
			}
			if ( arr[r] > arr[l] ){
				l--;
			}
		}
		for ( ll j=v.size()-1; j>0; j--)
			cout << v[j] << " ";
		cout << v[0] << endl;
	}
	return 0;
}