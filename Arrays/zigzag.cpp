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
	tc(x,t){
		ll n;
		cin >> n;
		ll arr[n];
		rep(j,n){
			cin >> arr[j];
		}
		rep(i,n-1){
			if( i%2 == 0 && arr[i]>arr[i+1])
				swap(arr[i],arr[i+1]);
			if( i%2 !=0 && arr[i]<arr[i+1])
				swap(arr[i],arr[i+1]);
		}
		rep(i,n-1){
			cout << arr[i] << " ";
		}
		cout << arr[n-1] << endl;
	}
	return 0;
}