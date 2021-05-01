#include <bits/stdc++.h>
#define ll long long
using namespace std;
int solve(string x, string y, int n, int m){
	if( n ==0 || m == 0)
		return 0;
	if(x[n-1] == y[m-1])
		return solve(x, y, n-1, m-1)+1;
	else
		return max(solve(x,y,n-1,m), solve(x,y, n, m-1));
}
int main(){
	int N, M;
	cin >> N >> M;
	string x, y;
	cin >> x;
	cin >> y;
	int ans = solve(x, y, N, M);
	cout << ans;
}