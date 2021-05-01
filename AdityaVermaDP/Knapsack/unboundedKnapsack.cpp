#include <bits/stdc++.h>
#define ll long long
using namespace std;
int knapSack(int N, int W, int val[], int wt[])
    {
        int dp[N+1][W+1];
	    for(int i = 0; i<=N; i++){
    		for(int j = 0; j<=W; j++){
    			if(i == 0 || j == 0)
    				dp[i][j] = 0;
    			else if( wt[i-1] > j )
    				dp[i][j] = dp[i-1][j];
    			else
    				dp[i][j] = max(val[i-1] + dp[i][j-wt[i-1]], dp[i-1][j]);
    		  }
        }
	    return dp[N][W];
    }
int main(){
    int N, W;
    cin >> N >> W;
    int w[N], v[N];
    for(int i =0; i<N; i++){
        cin >> w[i] >> v[i];
    }
    int ans = solve(N, W, w, v);
    cout << ans; 
}
