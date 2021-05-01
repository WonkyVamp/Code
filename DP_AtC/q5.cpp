#include <bits/stdc++.h>
#define ll long long
using namespace std;
void solve(string s, string t){
	int sLen = s.length();
	int tLen = t.length();
	int dp[sLen+1][tLen+1];
	for(int i =0; i<=sLen; i++){
		for (int j =0; j<= tLen; ++j)
		{
			if(i ==0 || j==0)
				dp[i][j] = 0;
			else if(s[i-1] == t[j-1])
				dp[i][j] = dp[i-1][j-1]+1;
			else
				dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
		}
	}
	int i= sLen, j = tLen, index = dp[sLen][tLen];
	char ans[index+1];
	ans[index] = '\0';
	while(i > 0 && j > 0){
		if(s[i-1] == t[j-1]){
			ans[index-1] = s[i-1];
			i--;
			j--;
			index--;
		}
		else if(dp[i-1][j] > dp[i][j-1])
			i--;
		else
			j--;
	}
	cout << ans;
}
int main(){
	string s, t;
	cin >> s;
	cin >> t;
	solve(s,t);
}