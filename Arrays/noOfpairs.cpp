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
ll power(ll num,ll r){
	if(r==0) return 1;
	if(r==1) return num%MOD;
	ll ans=power(num,r/2)%MOD;
	if(r%2==0) {
		return (ans*ans)%MOD;
	} return (((ans*ans)%MOD)*num)%MOD;
}
int main(int argc, char const *argv[])
{
	int t;
	cin >> t;
	tc(i,t){
		ll n,m;
		cin >> m >>n;
		ll x[m],y[n];
		rep(j,m){
			cin >> x[j];
		}
		rep(j,n){
			cin >> y[j];
		}
		
		p(ctr);
	}
	return 0;
}