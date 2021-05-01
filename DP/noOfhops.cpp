#include <iostream> 
#include <algorithm>
#define ll long long
#define MOD 1000000007
#define tc(i,t) for( int i=0; i<t; i++ )
#define rep(i,n) for( ll i=0; i<n; i++)
#define repi(i,n) for( int i=0; i<n; i++)
#define rep11(i,n) for( ll i=1; i<n; i++)
#define rep1(i,m) for( ll i=0; i<m; i++)
#define p(i) cout << i << endl
using namespace std;
int dp[51];
int main(){
	int t;
	cin >> t;
	dp[1]=1;
	dp[2]=2;
	dp[3]=4;
	for(int i=4; i<=50; i++)
		dp[i]=dp[i-1]+dp[i-2]+dp[i-3];
	tc(z,t){
		int N;
		cin >> N;
		cout << dp[N]<< endl;
	}
}