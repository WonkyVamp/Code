#include <bits/stdc++.h>
#define ll long long
using namespace std;
int solve(string s, string t) {
       int m = s.length();
       int n = t.length();
       if(s == t)
            return 0;
        int dp[m+1][n+1];
        for(int i =0; i <= m; i++){
            for(int j = 0; j<= n; j++){
                if( i == 0)
                    dp[i][j] = j;
                else if(j == 0)
                    dp[i][j] = i;
                else if(s[i-1] == t[j-1])
                    dp[i][j] = dp[i-1][j-1];
                else
                    dp[i][j] = 1 + min(dp[i-1][j-1], min(dp[i-1][j], dp[i][j-1]));
            }
        }
        return dp[m][n];
    }
int main(){
    string x, y;
    cin >> x;
    cin >> y;
    int str = solve(x,y);
    cout << str;
}