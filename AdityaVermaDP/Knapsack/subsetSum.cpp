#include <bits/stdc++.h>
#define ll long long
using namespace std;
//1 for true 0 for false
bool solve(ll N, ll sum, ll arr[]){
	bool dp[N+1][sum+1];
	for(int i =0; i<=N; i++){
		for(int j =0; j<= sum; j++){
			if(j==0)
				dp[i][j] = true;
			else if(i == 0 && j != 0)
				dp[i][j] = false;
			else if(arr[i-1] <= j)
				dp[i][j] = dp[i-1][j-arr[i-1]] || dp[i-1][j];
			else
				dp[i][j] = dp[i-1][j];
		}
	}
	return dp[N][sum];
}
int main(){
	ll N, sum;
	cin >> N >> sum;
	ll arr[N];
	for(ll i =0; i<N; i++){
		cin >> arr[i];
	}
	bool ans = solve(N, sum, arr);
	cout << ans; 
}