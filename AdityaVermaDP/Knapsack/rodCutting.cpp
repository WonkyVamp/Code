#include <bits/stdc++.h>
#define ll long long
using namespace std;
int solve(int price[], int n )
{
    int length[n];
    for(int i =0; i<n; i++){
        length[i] = i+1;
    }
    int dp[n+1][n+1];
    memset(dp, 0, sizeof(dp));
    for(int i =1; i<=n; i++){
        for(int j =1; j<= n; j++){
            if(length[i-1] <= j)
                dp[i][j] = max(price[i-1] + dp[i][j - length[i-1]], dp[i-1][j]);
            else
                dp[i][j] = dp[i-1][j];
        } 
    }
    return dp[n][n];
}
int main(){
    int N;
    cin >> N;
    int w[N];
    for(int i =0; i<N; i++){
        cin >> w[i];
    }
    int ans = solve(w, N);
    cout << ans; 
}
