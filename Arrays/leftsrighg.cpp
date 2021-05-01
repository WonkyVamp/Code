//doesn't give correct output :(((((((((((((((((())))))))))))))))))
#include <iostream> 
#include <algorithm>
#include <climits>
#define ll long long
#define MOD 1000000007
#define tc(i,t) for( int i=0; i<t; i++ )
#define rep(i,n) for( ll i=0; i<n; i++)
#define rep11(i,n) for( ll i=1; i<n; i++)
#define rep1(i,m) for( ll i=0; i<m; i++)
#define p(i) cout << i << endl
using namespace std;
ll solve(ll arr[],ll n){
	ll leftMax[n];
	leftMax[0]=INT_MIN;
	rep11(i,n){
		leftMax[i] = max(leftMax[i-1],arr[i-1]);
	}
	ll rightMin = INT_MAX;
	for ( ll i=n-1; i>=0; i--){
		if(leftMax[i]<arr[i] && rightMin > arr[i])
			return i;
		rightMin=min(rightMin,arr[i]);
	}
	return -1;
}
int main(int argc, char const *argv[])
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin >> t;
	tc(i,t){
		ll n;
		cin >> n;
		ll arr[n];
		int y=0;
		rep(j,n){
			cin >> arr[j];
		}
		// ll x=solve(arr,n);
		// if( x==-1 || n-1)
		// 	p(-1);
		// else
		// 	p(arr[x]);
		cout << solve(arr,n) << endl;
	}
	return 0;
}