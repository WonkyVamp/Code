#include <iostream>
#include <algorithm>
#include <unordered_map>
#define ll long long
#define MOD 1000000007
#define tc(i,t) for( int i=0; i<t; i++ )
#define rep(i,n) for( ll i=0; i<n; i++)
#define rep11(i,n) for( ll i=1; i<n; i++)
#define rep1(i,m) for( ll i=0; i<m; i++)
#define repr(i,n) for( ll i=n-1; i>=0; i-- )
#define p(i) cout << i << endl
using namespace std;
int maxLen( int a[], int n){
	int sum =0;
	unordered_map<int, int> map1;
	int max_i = 0;
	rep(i,n){
		sum = sum + a[i];
		if( sum == 0 )
			max_i = i+1;
		else if(map1.find(sum) == map1.end()){
			map1[sum]=i;
		}
		else{
			if(max_i<(i-map1[sum]))
				max_i=i-map1[sum];
		}
	}return max_i;
}
int main(int argc, char const *argv[])
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin >> t;
	tc(y,t){
		int n;
		cin >> n;
		int A[n];
		rep(i,n){
			cin >> A[i];
		}
		int x = maxLen(A,n);
		p(x);
	}
	return 0;
}