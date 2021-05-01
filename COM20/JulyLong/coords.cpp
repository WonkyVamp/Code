#include <iostream> 
#include <map>
#include <algorithm>
#define ll long long
#define MOD 1000000007
#define tc(i,t) for( int i=0; i<t; i++ )
#define rep(i,n) for( ll i=0; i<n; i++)
#define rep11(i,n) for( ll i=1; i<n; i++)
#define rep1(i,m) for( ll i=0; i<m; i++)
#define p(i) cout << i << endl
using namespace std;
ll solve1(ll v[], int n){
	ll res=v[0];
	rep11(i,n){
		res = res ^ v[i];
	}
	return res;
}
int main(int argc, char const *argv[])
{
	int t;
	cin >> t;
	tc(i,t){
		ll n;
		cin >> n;
		ll size=4*n-1;
		ll ax[size];
		ll ay[size];
		rep(j,size){
			cin >> ax[j] >> ay[j];
		}
		ll x= solve1(ax,size);
		ll y= solve1(ay,size);
		cout << x << " " << y << endl;
	}
	return 0;		
}