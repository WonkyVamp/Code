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
	tc(i,t){
		int x,y,z;
		cin >> x >> y >> z;
		if(x == y && y == z){
			cout << "YES" << endl;
			cout << x << " " << x << " " << x << endl;
		}
		else if( x == y && y != z ){
			cout << "YES" << endl;
			cout << x << " " << z << " " << z << endl;
		}
		else if( z == y && y != x ){
			cout << "YES" << endl;
			cout << x << " " << x << " " << z << endl;
		}
		else if( x == z && x != y ){
			cout << "YES" << endl;
			cout << y << " " << x << " " << y << endl;
		}
		else{
			cout << "NO" << endl;
		}
	}
}
		