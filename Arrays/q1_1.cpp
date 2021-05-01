#include <iostream> 
#include <algorithm>
#include <vector>
#define ll long long
#define MOD 1000000007
#define tc(i,t) for( int i=0; i<t; i++ )
#define rep(i,n) for( ll i=0; i<n; i++)
#define rep11(i,n) for( ll i=1; i<n; i++)
#define rep1(i,m) for( ll i=0; i<m; i++)
#define p(i) cout << i << endl
using namespace std;
int solve(int a, int b, int c, int d){
		return b-c;

}
int main(int argc, char const *argv[])
{
	int a,b,c,d;
	cin >> a >> b;
	cin >> c >> d;
	int ans = solve(a,b,c,d);
	cout << ans;
}