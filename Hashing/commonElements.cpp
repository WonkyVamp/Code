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
		cin >> n >>m >>x;
		map<ll, ll> um;
		ll a[n],b[m],c[x];
		rep(i,n){
			cin >> a[i];
			if( um.find(a[i]) == um.end()){
				um[a[i]]++;
			}
		}
		rep(i,m){
			cin >> b[i];
			auto itr = um.find(b[i]);
			if( itr != um.end() && itr->second ==1 ){
				um[b[i]]++;
			}
		}
		rep(i,x){
			cin >> c[i];
			auto itr = um.find(c[i]);
			if( itr != um.end() && itr->second ==2 ){
				um[c[i]]++;
			}
		}
		int flag = 0;
		for(auto itr=um.begin(); itr !=um.end(); ++itr){
			if( itr->second ==3 ){
				if(flag ==0 ){
					cout << itr->first;
					flag++;
				}
				else
					cout << " " << itr->first;
			}
		}
		if(flag == 0)
			cout << -1;
		cout << "\n";
	}
	return 0;
}