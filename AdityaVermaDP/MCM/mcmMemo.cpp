#include <bits/stdc++.h>
using namespace std;
static int dp[101][101];
int solve(int arr[], int i, int j){
	if(dp[i][j] != -1)
		return dp[i][j];
	if( i>= j)
		return 0;
	int m = INT_MAX;
	for(int k = i; k<= j-1; k++){
		int temp1 = solve(arr, i, k) + solve(arr, k+1, j) + (arr[i-1]*arr[k]*arr[j]);
		m = min(temp1, m);
		dp[i][j] = m;
	}
	return dp[i][j];
}
int matrixMultiplication(int N, int arr[])
{
	//static int dp[N+1][N+1];
	memset(dp, -1, sizeof(dp));
	int ans = solve(arr, 1, N-1);
	return ans;
}
 int main(){
 	int N;
 	cin >> N;
 	int arr[N];
 	for(int i =0; i<N; i++){
 		cin >> arr[i];
 	}
 	int ans = matrixMultiplication(N, arr);
 	cout << ans;
 }
