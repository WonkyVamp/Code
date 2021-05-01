#include <iostream> 
#include <algorithm>
#define ll long long
#define MOD 1000000007
#define tc(i,t) for( int i=0; i<t; i++ )
#define rep(i,n) for( ll i=0; i<n; i++)
#define repi(i,n) for( int i=0; i<n; i++)
#define rep11(i,n) for( ll i=1; i<n; i++)
#define rep1(i,m) for( ll i=0; i<m; i++)
#define p(i) cout << i << endl
using namespace std;
int lis(int arr[], int N){
	int dp[N+1];
	dp[0]=arr[0];
	repi(i,N){
		dp[i]=arr[i];
		for(int j=0; j<i; j++){
			if(arr[i]>arr[j] && dp[i]<dp[j]+arr[i])
				dp[i]=dp[j]+arr[i];
		}
	}
	return *max_element(dp,dp+N);
}
int main(){
	int t;
	cin >> t;
	tc(z,t){
		int N;
		cin >> N;
		int arr[N];
		repi(i,N){
			cin >> arr[i];
		}
		cout << lis(arr,N) << endl;
	}
}