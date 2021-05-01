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
		cin >> n ;
		ll arr[n];
		rep(j,n){
			cin >> arr[j];
		}
		sort(arr, arr+n);
		int l=0, r=n-1;
		while( l<r ){
			
		}
		rep(j,n-1){
			cout << arr[j] << " " << endl;
		}
		cout << arr[n-1] << endl;
	}
	return 0;
}