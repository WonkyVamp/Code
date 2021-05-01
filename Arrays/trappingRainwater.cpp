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
ll solve( ll arr[], ll n){
	ll low =0, high =n-1, result=0;
	ll left_max=0,right_max=0;
	while( low <= high ){
		if( arr[low] < arr[high]){
			if( arr[low] > left_max )
				left_max = arr[low];
			else
				result += left_max - arr[low];
			low++;
		}
		else{
			if( arr[high] > right_max )
				right_max = arr[high];
			else
				result += right_max - arr[high];
			high--;
		}
	}
	return result;
}
ll solve2 ( ll arr[], ll n){
	ll left[n], right[n];
	ll result=0;
	left[0]=arr[0];
	rep11(j,n){
		left[j] = max(left[j-1], arr[j]);
	}
	right[n-1]=arr[n-1];
	for( ll j=n-2; j>=0; j-- ){
		right[j] = max( right[j+1], arr[j]);
	}
	rep(j,n){
		result +=min(left[j],right[j])-arr[j];
	}
	return result;
}
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
		//ll ctr = solve(arr,n);
		ll ctr = solve2(arr,n);
		p(ctr);
	}
	return 0;
}