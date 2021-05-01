#include <iostream> 
#include <algorithm>
#include <vector>
#include <stack>
#define ll long long
#define MOD 1000000007
#define tc(i,t) for( int i=0; i<t; i++ )
#define repi(i,n) for( int i=0; i<n; i++ )
#define rep(i,n) for( ll i=0; i<n; i++)
#define rep11(i,n) for( ll i=1; i<n; i++)
#define rep1(i,m) for( ll i=0; i<m; i++)
#define p(i) cout << i << endl
using namespace std;
int main(){
	int t;
	cin >> t;
	tc(z,t){
		ll N;
		cin >> N;
		ll arr[N];
		rep(i,N){
			cin >> arr[i];
		}
		stack<ll>s;
		ll ans[N];
		//cout << "hello";
		for(ll i=N-1; i>=0; i--){
			//cout << i;
			while(s.empty()==false && s.top()<=arr[i]){
				s.pop();
			}
			ans[i]=(s.empty())? -1 : s.top();
			//cout << i << ans[i];
			s.push(arr[i]);
		}
		rep(i,N){
			if(i==0)
				cout << ans[i];
			else
				cout << " " << ans[i];
		}
		cout << "\n";
	}
}