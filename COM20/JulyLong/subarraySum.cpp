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
int main(int argc, char const *argv[])
{
	int t;
	cin >> t;
	tc(i,t){
		ll n,s;
		cin >> n >> s;
		ll array[n];
		rep(j,n){
			cin >> array[j];
		}
		int l=0,h=1,x=1;
		ll sum = array[l]+array[h];
		while( l<=n && h<=n ){
			if( sum < s ){
				h++;
				sum +=array[h];
			}
			else if ( sum == s ){
				x=1;
				break;
			}
			else{
				sum -=array[l];
				l++;
			}
		}
		if( x==1 )
			cout << l << " " << h << endl;
		else
			cout << -1 << endl;
	}
	return 0;
}