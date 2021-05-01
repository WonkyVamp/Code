#include <bits/stdc++.h>
#define ll long long
using namespace std;
int solve(string x, string y, int n, int m){
	int dp[n+1][m+1];
	for(int i =0; i<=n; i++){
		for(int j = 0; j<=m; j++){
			if(i == 0 || j == 0)
				dp[i][j] = 0;
			else if( x[i-1] == y[j-1])
				dp[i][j] = dp[i-1][j-1]+1;
			else
				dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
		}
	}
	int common = dp[n][m];
	int xleft = n - common;
	int yleft = m - common;
	int ans = common + xleft + yleft;
	return ans;
}
int main(){
	int N, M;
	cin >> N >> M;
	string x, y;
	cin >> x;
	cin >> y;
	int ans = solve(x, y, N, M);
	cout << ans;
} 