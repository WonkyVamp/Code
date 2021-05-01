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
int lcis(int arr1[],int arr2[], int N, int M){
	int dp[M]={0};
	repi(i,N){
		int current =0;
		repi(j,M){
			if(arr1[i]>arr2[j] && current < dp[j])
				current=dp[j];
			if(arr1[i]==arr2[j] && dp[j]<(current+1))
				dp[j]=current+1;
		}
	}
	return *max_element(dp,dp+M);
}
int main(){
	int t;
	cin >> t;
	tc(z,t){
		int N;
		cin >> N;
		int arr1[N];
		repi(i,N){
			cin >> arr1[i];
		}
		int M;
		cin >> M;
		int arr2[M];
		repi(i,M){
			cin >> arr2[i];
		}
		cout << lcis(arr1,arr2,N,M) << endl;
	}
}