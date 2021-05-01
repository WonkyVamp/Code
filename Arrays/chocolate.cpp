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
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin >> t;
	tc(i,t){
		ll n,k;
		cin >> n;
		ll arr[n];
		rep(j,n){
			cin >> arr[j];
		}
		cin >> k;
		sort(arr,arr+n);
		int l=0,r=k-1;
		ll diff = arr[l+k-1]-arr[l];
		while( (l+k-1)<n-1 ){
			l++;
			ll diff2 = arr[l+k-1]-arr[l];
			diff = min(diff,diff2);
		}
		p(diff);
	}
	return 0;
}