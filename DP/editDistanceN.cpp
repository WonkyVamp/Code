#include <iostream> 
#include <algorithm>
#include <string>
#define ll long long
#define MOD 1000000007
#define tc(i,t) for( int i=0; i<t; i++ )
#define rep(i,n) for( ll i=0; i<n; i++)
#define repi(i,n) for( int i=0; i<n; i++)
#define rep11(i,n) for( ll i=1; i<n; i++)
#define rep1(i,m) for( ll i=0; i<m; i++)
#define p(i) cout << i << endl
using namespace std;
int editDis(string s1, string s2){
	if(s1==s2)
		return 0;
	int m = s1.length();
	int n = s2.length();
	if(m==0)
		return n;
	if(n==0)
		return m;
	int dp[m+1][n+1];
	for(int i=0; i<=m; i++){
		for(int j=0; j<=n; j++){
			if(i==0)
				dp[i][j]=j;
			else if(j==0)
				dp[i][j]=i;
			else if(s1[i-1]==s2[j-1])
				dp[i][j]=dp[i-1][j-1];
			else
				dp[i][j]=1+min(min(dp[i-1][j-1],dp[i-1][j]), dp[i][j-1]);
		}
	}
	return dp[m][n];
}
int main(){
	int t;
	cin >> t;
	tc(z,t){
		string s1,s2;
		cin >> s1 >> s2;
		int x = editDis(s1,s2);
		cout << x << endl;
	}
}