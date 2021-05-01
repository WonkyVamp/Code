#include <bits/stdc++.h>
#define ll long long
using namespace std;
int solve(int n, int diff, int arr[]){
	int sum = 0;
	for(int i = 0; i<n; i++){
		sum += arr[i];
		//cout << sum;
	}
	int sum1 = (diff+sum)/2;
	//cout << sum1;
	int dp[n+1][sum1+1];
	for(int i = 0; i <= n; i++){
		for(int j = 0; j <= sum1; j++){
			if( j == 0 )
				dp[i][j] = 1;
			else if( i == 0 && j != 0)
				dp[i][j] = 0;
			else if(j >= arr[i-1])
				dp[i][j] = dp[i-1][j] + dp[i-1][j-arr[i-1]];
			else
				dp[i][j] = dp[i-1][j];
		}
	}
	return dp[n][sum1];
}
int main(){
	int N, diff;
	cin >> N >> diff;
	int arr[N];
	for(int i =0; i<N; i++){
		cin >> arr[i];
	}
	int ans = solve(N, diff, arr);
	cout << ans; 
}