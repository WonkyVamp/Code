#include <bits/stdc++.h>
#define ll long long
using namespace std;
 int solve(int n, int x, int y, int z)
    {
        int length[3];
        length[0] = x;
        length[1] = y;
        length[2] = z;
        int dp[n+1];
        memset(dp, 0, sizeof(dp));
        for(int i = 1; i<=n; i++){
            for(int j =1; j <= n; j++){
                if(length[i-1] <= j)
                    dp[i][j] = max(dp[i][j-length[i-1]]+1, dp[i-1][j]);
                else
                    dp[i][j] = dp[i-1][j];
            }
        }
        return dp[3][n];
    }
int main(){
    int N, x, y, z;
    cin >> N >> x >> y >> z;
    int ans = solve(N, x, y, z);
    cout << ans; 
}
