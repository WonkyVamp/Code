#include <bits/stdc++.h>
using namespace std;
int solve(int egg, int floor){
	if(egg == 1 || floor == 1 || floor == 0)
		return floor;
	int mn = INT_MAX, temp;
	for(int j = 1; j<=floor; j++){
		temp = 1 + max(solve(egg-1, j-1), solve(egg, floor-j));
		mn = min(mn, temp);
	}
	return mn;
}
int main(){
	int n, k;
	cin >> n >> k;
	cout << solve(n,k);
}