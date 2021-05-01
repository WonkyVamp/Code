#include <bits/stdc++.h>
#define ll long long
using namespace std;
int solve(int n, int sum, int arr[]){
	int dp[n+1][sum+1];
	for(int i =0; i<=n; i++){
		for(int j =0; j<=sum; j++){
			if(j == 0)
				dp[i][j] = 1;
			else if( i == 0 && j != 0)
				dp[i][j] = 0;
			else if(arr[i-1] <= j)
				dp[i][j] = dp[i-1][j] + dp[i-1][j- arr[i-1]];
			else
				dp[i][j] =dp[i-1][j];
		}
	}
	return dp[n][sum];
}
int main(){
	int N, sum;
	cin >> N >> sum;
	int arr[N];
	for(ll i =0; i<N; i++){
		cin >> arr[i];
	}
	int ans = solve(N, sum, arr);
	cout << ans; 
}