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
		cin >> n >> k;
		ll arr[n];
		vector<ll> v;
		rep(j,n){
			cin >> arr[j];
		}
		for ( int i=0; i<n; i+=k ){
			int left = i;
			int right = min(i+k-1,n-1);
			while(left<right){
			swap(arr[left++],arr[right--]);
		}
		}
		rep(j,n-1){
			cout << arr[j] << " ";
		}
		p(arr[n-1]);
	}
	return 0;
}