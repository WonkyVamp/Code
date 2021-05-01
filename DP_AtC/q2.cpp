#include <bits/stdc++.h>
using namespace std;
/*Recursion
int height(int h[], int N, int i){
	if(i >= N-1)
		return 0;
	return min(height(h, N, i+1)+ abs(h[i]-h[i+1]) , height(h, N, i+2)+ abs(h[i]-h[i+2]));
}*/
int height(int h[], int N, int K){
	int dp[N] = {0};
	dp[0] = 0;
	dp[1] = abs(h[0]-h[1]);
	for(int i =1; i<N; i++){
		dp[i] = abs(h[i-1]-h[i]) + dp[i-1];
		for(int j = 1; j<=K; j++)
			if(i-j > = 0 )
				dp[i] = min(dp[i],abs(h[i]-h[i-j]) + dp[i-j] );
	}
	return dp[N-1];
}

int main(){
	int N, K;
	cin >> N >> K;
	int h[N];
	for(int i =0; i<N; i++){
		cin >>h[i];
	}
	int ans = height(h,N,K);
	cout << ans;
}
