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
int main(int argc, char const *argv[])
{
	int t;
	cin >> t;
	tc(i,t){
		ll n,s;
		cin >> n >> s;
		ll arr[n];
		rep(j,n){
			cin >> arr[j];
		}
		sort(arr,arr+n);
		ll l=0,h=n-1;
		int x=0;
		ll sum = arr[l] + arr[h];
		while( l<h ){
			if( sum == s ){
				x=1;
				break;
			}
			else if ( sum < s ){
				sum = sum - arr[l];
				l++;
				sum = sum + arr[l];
			}
			else if ( sum > s ){
				sum = sum - arr[h];
				h--;
				sum = sum + arr[h];
			}
		}	
		if( x==1 ){
			cout << "Yes" << endl;
		}
		else{
			cout << "No" << endl;
		}
	}
	return 0;
}