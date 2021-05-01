#include <bits/stdc++.h>
using namespace std;
int dp[1002][1002];
bool isPalindrome(string s, int i, int j){
	while(i<j){
		if(s[i] != s[j])
			return false;
		i++;
		j--;
	}
	return true;
}
int solve(string s, int i, int j){
	if(i>=j){
		dp[i][j] = 0;
		return 0;
	}
	if(isPalindrome(s, i, j)){
		dp[i][j] = 0;
		return 0;
	}
	if(dp[i][j] != -1){
	    return dp[i][j];
	}
	int ans = INT_MAX,temp, left, right;
	for(int k = i; k<j; k++){
		if(dp[i][k] == -1)
	        dp[i][k] = solve(s, i, k);
	    if(dp[k+1][j] == -1)
	        dp[k+1][j] = solve(s,k+1, j);
		temp = dp[i][k] + 1 + dp[k+1][j];
		ans = min(ans, temp);
	}
	return dp[i][j] = ans;
}
int palindromicPartition(string s){
	memset(dp, -1, sizeof(dp));
	return solve(s,0, s.size()-1);
}
int main(){
	string s;
	cin >> s;
	cout << palindromicPartition(s);
}