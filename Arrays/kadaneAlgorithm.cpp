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
	tc(x,t){
		ll n;
		cin >> n;
		ll arr[n];
		rep(j,n){
			cin >> arr[j];
		}
		ll max_so_far=arr[0],curr_max=arr[0];
		//int s,start,end;
		rep11(i,n){
			curr_max = max(arr[i], curr_max+arr[i]);
			max_so_far = max( max_so_far , curr_max);
		}
		p(max_so_far);
	}
	return 0;
}