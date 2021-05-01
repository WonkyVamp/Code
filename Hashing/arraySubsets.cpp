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
		ll m,n;
		cin >> m >> n;
		std::map<int, int> map;
		ll a1[m], a2[n];
		rep(i,m){
			cin >> a1[i];
			map[a1[i]]++;
		}
		rep(i,n){
			cin >> a2[i];
		}
		int flag = 0;
		rep(i,n){
			if(map.find(a2[i])==map.end()){
				flag=1;
				break;
			}
			else{
				map[a2[i]]--;
				if( map[a2[i]] == 0 )
					map.erase(map.find(a2[i]));
			}
		}
		if( flag == 1 )
			cout << "No" << endl;
		else
			cout << "Yes" << endl;
	}
	return 0;
}