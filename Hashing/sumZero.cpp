#include <iostream>
#include <algorithm>
#include <unordered_map>
#define ll long long
#define MOD 1000000007
#define tc(i,t) for( int i=0; i<t; i++ )
#define rep(i,n) for( ll i=0; i<n; i++)
#define rep11(i,n) for( ll i=1; i<n; i++)
#define rep1(i,m) for( ll i=0; i<m; i++)
#define repr(i,n) for( ll i=n-1; i>=0; i-- )
#define p(i) cout << i << endl
using namespace std;
int main(int argc, char const *argv[])
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin >> t;
	tc(y,t){
		ll n;
		cin >> n;
		unordered_map<ll, ll> map;
		ll A[n];
		ll sum=0;
		rep(i,n){
			cin >> A[i];
			sum += A[i];
			A[i] = sum;
		}
		int ctr =0;
		rep(i,n){
			if( A[i] == 0 ){
				ctr++;
			}
			if(map[A[i]]>0){
				ctr += map[A[i]];
			}
			map[A[i]]++;
		}
		p(ctr);
	}
	return 0;
}