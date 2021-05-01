#include <iostream>
#include <algorithm>
#include <unordered_map>
#define ll long long
#define MOD 1000000007
#define tc(i,t) for( int i=0; i<t; i++ )
#define rep(i,n) for( ll i=0; i<n; i++)
#define rep11(i,n) for( ll i=1; i<n; i++)
#define rep1(i,m) for( ll i=0; i<m; i++)
#define repr(i,n) for( ll i=n-1; i>=0; i--)
#define p(i) cout << i << endl
using namespace std;
int main(int argc, char const *argv[])
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin >> t;
	tc(y,t){
		ll n,x;
		cin >> n >> x;
		unordered_map<ll, ll> map;
		ll A[n];
		rep(i,n){
			cin >> A[i];
			map[A[i]]++;
		}
		int flag =0,i=0;
		while(i<n){
			if(map[A[i]] == x ){
				flag = 1;
				break;
			}
			i++;
		}
		if(flag)
			cout << A[i] << endl;
		else
			p(-1);
	}
	return 0;
}