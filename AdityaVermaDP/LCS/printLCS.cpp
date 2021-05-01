#include <bits/stdc++.h>
#define ll long long
using namespace std;
string reverse(string str)
{
   for (int i=str.length()-1; i>=0; i--)
       str[i]; 
}
string solve(string x, string y, int n, int m){
	int dp[n+1][m+1];
	for(int i =0; i<=n; i++){
		for(int j = 0; j<=m; j++){
			if(i == 0 || j == 0)
				dp[i][j] = 0;
			else if( x[i-1] == y[j-1])
				dp[i][j] = dp[i-1][j-1]+1;
			else
				dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
		}
	}
	int i = n;
	int j = m;
	string s = "";
	while( i > 0 && j > 0){
			if(x[i-1] == y[j-1]){
				s = s + x[i-1];
				i = i-1;
				j = j-1;
			}
			else if( dp[i-1][j] >= dp[i][j-1])
				i = i-1;
			else
				j = j-1;
		}
	}
	return s;
}
int main(){
	int N, M;
	cin >> N >> M;
	string x, y;
	cin >> x;
	cin >> y;
	string str = solve(x, y, N, M);
    for (int i=str.length()-1; i>=0; i--)
    	cout << str[i]; 
}
