#include <iostream> 
#include <algorithm>     
#include <vector>
#define ll long long
#define MOD 1000000007
#define tc(i,t) for( int i=0; i<t; i++ )
#define rep(i,n) for( ll i=0; i<n; i++)
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
		std::vector<ll> v;
		ll ctr=0;
		rep(j,n){
			ll s;
			cin >> s;
			v.push_back(s);
			if(j==0)
				continue;
			ll m= abs(v[j-1]-s)-1;
			ctr=ctr+m;
		}
		p(ctr);
	}
	return 0;
}
