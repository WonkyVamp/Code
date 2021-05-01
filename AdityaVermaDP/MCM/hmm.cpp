#include <bits/stdc++.h>
using namespace std;
int static dp[201][201];
int solve(int egg, int floor){
	if(egg == 1 || floor == 1 || floor == 0)
		return floor;
	if(dp[egg][floor] != -1)
		return dp[egg][floor];
	int mn = INT_MAX, temp, low, high;
	for(int j = 1; j <= floor; j++){
		if(dp[egg-1][floor-1] != -1)
			low = dp[egg-1][j-1];
		else
			low = solve(egg-1, j-1);
		if(dp[egg][floor - j] != -1)
			high = dp[egg][floor - j];
		else 
			high = solve(egg, floor-j);
		temp = 1 + max(low, high);
		mn = min(mn, temp);
	}
	return dp[egg][floor] = mn;
}
int main(){
	int n, k;
	cin >> n >> k;
	memset(dp, -1, sizeof(dp));
	cout << solve(n,k);
}