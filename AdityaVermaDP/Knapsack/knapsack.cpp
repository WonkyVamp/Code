#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll solve(ll N, ll W, ll w[], ll v[]){
	double dp[N+1][W+1];
	for(ll i = 0; i<=N; i++){
		for(ll j = 0; j<=W; j++){
			if(i == 0 || j == 0)
				dp[i][j] = 0;
			else if( w[i-1] > j )
				dp[i][j] = dp[i-1][j];
			else
				dp[i][j] = max(v[i-1] + dp[i-1][j-w[i-1]], dp[i-1][j]);
		}
	}
	return dp[N][W];
}
int main(){
	ll N, W;
	cin >> N >> W;
	ll w[N], v[N];
	for(ll i =0; i<N; i++){
		cin >> w[i] >> v[i];
	}
	ll ans = solve(N, W, w, v);
	cout << ans; 
}