#include <bits/stdc++.h>
using namespace std;
int solve(int arr[], int i, int j){
	if( i>= j)
		return 0;
	int m = INT_MAX;
	for(int k = i; k<= j-1; k++){
		int temp1 = solve(arr, i, k) + solve(arr, k+1, j) + (arr[i-1]*arr[k]*arr[j]);
		m = min(temp1, m);
	}
	return m;
}
 int main(){
 	int arr[] = {40, 20, 30, 10, 30};
 	int ans = solve(arr, 1, 4);
 	cout << ans;
 }
