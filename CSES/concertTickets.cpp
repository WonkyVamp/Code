#include <iostream> 
#include <algorithm>     
#include <set>
#include <vector>
#define ll long long
#define MOD 1000000007
#define rep(i,n) for( ll i=0; i<n; i++)
#define rep1(i,m) for( ll i=0; i<m; i++)
#define p(i) cout << i << endl
using namespace std;
int main()
{
	ll n,m,value,max;
	cin >> n >> m;
	multiset <ll> v;
	rep(i,n){
		ll x;
		cin >> x;
		v.insert(x);
	}
	rep(i,m){
		cin >> max;
		auto itr = v.upper_bound(max);
		if ( itr == v.begin() )
			p(-1);
		else{
			itr--;
			p(*itr);
			v.erase(itr);
		}
	}
}