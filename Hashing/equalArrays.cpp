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
		ll A[n], B[n];
		unordered_map<ll, ll> map;
		rep(i,n){
			cin >> A[i];
			map[A[i]]++;
		}
		rep(i,n){
			cin >> B[i];
		}
		int flag =0;
		rep(i,n){
			if(map.find(B[i]) == map.end() ){
				flag = 1;
				break;
			}
			else{
				map[B[i]]--;
				if (map[B[i]] ==0 )
					map.erase(map.find(B[i]));
			}

		}
		if(!flag)
			p(1);
		else
			p(0);
	}
	return 0;
}