#include <iostream>
#include <algorithm>
#include <map>
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
		ll n,m,x;
		cin >> n >> m >> x;
		std::map<int, int> map;
		ll A[n], B[m];
		rep(i,n){
			cin >> A[i];
		}
		sort(A,A+n);
		rep(i,m){
			cin >> B[i];
			map[B[i]]++;
		}
		int flag = 0;
		ll res =0;
		rep(i,n){
			res = x-A[i];
			if(map.find(res) == map.end()){
				continue;
			}
			else{
				flag++;
				if(flag == 1 )
					cout << A[i] << " " << res;
				else
					cout << "," << " " << A[i] << " " <<res;
			}
		}
		if(flag == 0 )
			p(-1);
		else 
			cout << "\n";
	}
	return 0;
}