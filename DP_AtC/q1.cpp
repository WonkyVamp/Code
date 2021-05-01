#include <bits/stdc++.h>
using namespace std;
/*Recursion
int height(int h[], int N, int i){
	if(i >= N-1)
		return 0;
	return min(height(h, N, i+1)+ abs(h[i]-h[i+1]) , height(h, N, i+2)+ abs(h[i]-h[i+2]));
}*/
int height(int h[], int N){
	int dp[N] = {0};
	dp[0] = 0;
	dp[1] = abs(h[0]-h[1]);
	for(int i =2; i<N; i++){
		dp[i] = min(abs(h[i-1]-h[i]) + dp[i-1],abs(h[i-2]-h[i]) + dp[i-2] );
	}
	return dp[N-1];
}

int main(){
	int N;
	cin >> N;
	int h[N];
	for(int i =0; i<N; i++){
		cin >>h[i];
	}
	int ans = height(h,N);
	cout << ans;
}
