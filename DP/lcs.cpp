#include <iostream> 
#include <algorithm>
#include <string>
#define ll long long
#define MOD 1000000007
#define tc(i,t) for( int i=0; i<t; i++ )
#define rep(i,n) for( ll i=0; i<n; i++)
#define rep11(i,n) for( ll i=1; i<n; i++)
#define rep1(i,m) for( ll i=0; i<m; i++)
#define p(i) cout << i << endl
using namespace std;
int max(int a,int b){
	if(a>b)
		return a;
	else
		return b;
}
int lcs(string s1, string s2,ll n,ll s){
	int max_v=0;
	ll dp[n+1][s+1];
	for(ll i=0; i<=n; i++){
		for( ll j=0; j<=s; j++){
			if(i==0 || j==0)
				dp[i][j]=0;
			else if(s1[i-1]==s2[j-1]){
				dp[i][j]=dp[i-1][j-1]+1;
				//for continuous
				//max_v=max(max_v,dp[i][j]);
			}
			else{
				//for continuous
				//dp[i][j]=0;
				dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
			}
		}
	}
	//for cont
	//return max_v;
	return dp[n][s];
	//printing lcs
	// ll index = dp[n][s];
	// ll i=n,j=s;
	// char lcs1[index+1];
	// lcs1[index] = '\0';
	// while(i>0 && j>0){
	// 	if(s1[i-1]==s2[j-1]){
	// 		lcs1[index-1]=s1[i-1];
	// 		index--;
	// 		i--;
	// 		j--;
	// 	}
	// 	else if(dp[i-1][j]>dp[i][j-1])
	// 		i--;
	// 	else
	// 		j--;
	// }
	// cout <<lcs1; 
}

int main(int argc, char const *argv[])
{
	int t;
	cin >> t;
	tc(z,t){
		ll n,s;
		cin >> n >> s;
		string str1, str2;
		cin >> str1;
		cin >> str2;
		cout << lcs(str1,str2,n,s) << endl;
	}
}
