#include <bits/stdc++.h>
#define ll long long
using namespace std;
//1 for true 0 for false
bool solve(ll N, ll arr[]){
	ll sum = 0;
	for(int i =0; i<N; i++){
		sum += arr[i];
	}
	if( sum % 2 != 0 )
		return false;
	bool dp[N+1][sum/2+1];
	for(int i =0; i<=N; i++){
		for(int j =0; j<= sum/2; j++){
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
	return dp[N][sum/2];
}
int main(){
	ll N;
	cin >> N;
	ll arr[N], sum = 0;
	for(ll i =0; i<N; i++){
		cin >> arr[i];
		sum += arr[i];
	}

	bool ans = solve(N,arr);
	cout << ans; 
}
// 8 1963
// 478 757 314 471 729 100 459 618
