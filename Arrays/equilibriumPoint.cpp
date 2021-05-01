#include <iostream> 
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
	tc(x,t){
		ll n;
		cin >> n;
		ll a[n];
		rep(j,n){
			cin >> a[j];
		}
		if ( n==1 )
			p(1);
		else{
		int l=0, r= n-1;
		int m=0;
		ll suml = a[l];
		ll sumr = a[r];
		while( l<=r ){
			if( suml < sumr ){
				l++;
				suml += a[l];
			}
			if( suml > sumr ){
				r--;
				sumr += a[r];
			}
			if ( suml == sumr && (l+2 == r )){
				m=1;
				break;
			}
			else if ( suml == sumr && (l+2 !=r)){
				l++;
				suml += a[l];
			}
		}
		if( m==1 ){
			p(r);
		}
		else{
			p(-1);
		}
	}
	}
	return 0;
}	