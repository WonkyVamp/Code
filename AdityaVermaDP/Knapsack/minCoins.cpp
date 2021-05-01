#include <bits/stdc++.h>
using namespace std;
#define ll long long 
long long int count( int S[], int m, int n )
{
	ll dp[m+1][n+1];
	for(int i = 1; i <= m; i++)
		dp[i][0] = 0;
	for(int j = 0; j <= n; j++)
		dp[0][j] = INT_MAX-1; 
	for(int j = 1; j <= n; j++){
		if( j % S[0] == 0)
			dp[1][j] = j/S[0];
		else
			dp[1][j] = INT_MAX-1;
	}  
	for(int i = 2; i<= m; i++){
		for(int j = 1; j<=n; j++){
			if(S[i-1] <= j)
				dp[i][j] = min( 1 + dp[i][j-S[i-1]], dp[i-1][j]);
			else
				dp[i][j] = dp[i-1][j];
		}
	}
	if(dp[m][n] == INT_MAX - 1 || dp[m][n]==INT_MAX)
    	    return -1;
	return dp[m][n];
}
int main(){
	int n, m;
	cin >> n >> m;
	int arr[m];
	for(int i =0; i<m; i++){
		cin >> arr[i];
	}
	ll ans = count(arr, m, n);
	cout << ans;
}