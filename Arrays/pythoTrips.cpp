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
		ll n,k;
		cin >> n;
		ll arr[n];
		rep(j,n){
			cin >> arr[j];
		}
		rep(j,n){
			arr[j] = arr[j]*arr[j];
		}
		int x=0;
		ll a,b,c;
		sort(arr,arr+n);
		for (ll j=n-1; j>=0; j--){
			c= arr[j];
			ll l=0,r=j-1;
			while(l<r){
				if( arr[l] + arr[r] == c){
					x = 1;
					break;
				}
				else if ( arr[l] + arr[r] < c )
					l++;
				else
					r--;
			}
			if( x== 1)
				break;
		}
		if ( x==1 )
			cout << "Yes" << endl;
		else
			cout << "No" << endl;
	}
	return 0;
}