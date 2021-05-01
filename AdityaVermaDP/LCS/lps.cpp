#include <bits/stdc++.h>
#include <string.h>
#define ll long long
using namespace std;
int solve(string x,int n){
	string y = x;
	reverse(y.begin(), y.end());
	int dp[n+1][n+1];
	for(int i =0; i<=n; i++){
		for(int j = 0; j<=n; j++){
			if(i == 0 || j == 0)
				dp[i][j] = 0;
			else if( x[i-1] == y[j-1])
				dp[i][j] = dp[i-1][j-1]+1;
			else
				dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
		}
	}
	return dp[n][n];
}
int main(){
	int N;
	cin >> N;
	string x;
	cin >> x;
	int ans = solve(x, N);
	cout << ans;
} 