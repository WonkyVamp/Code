#include <bits/stdc++.h>
#define ll long long
using namespace std;
//1 for true 0 for false
int solve(ll N, ll arr[]){
	ll sum = 0;
	for(int i =0; i<N; i++){
		sum += arr[i];
	}
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
	ll min1 = INT_MAX;
	for(int i = 0; i < sum/2+1; i++){
		if( dp[N][i] == true){
			ll diff = sum - 2*i;
			min1 = min(min1, diff);
		}
	}
	return min1;
}
int main(){
	ll N;
	cin >> N;
	ll arr[N];
	for(ll i =0; i<N; i++){
		cin >> arr[i];
	}
	int ans = solve(N, arr);
	cout << ans; 
}