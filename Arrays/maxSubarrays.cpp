#include <iostream> 
#include <algorithm>
#include <deque>
#include <vector>
#define ll long long
#define MOD 1000000007
#define tc(i,t) for( int i=0; i<t; i++ )
#define rep(i,n) for( ll i=0; i<n; i++)
#define rep11(i,n) for( ll i=1; i<n; i++)
#define rep1(i,m) for( ll i=0; i<m; i++)
#define p(i) cout << i << endl
using namespace std;
vector<ll> solve(ll arr[], ll k, ll n){
	vector<ll>ans;
	deque<ll>dq;
	ll i=0;
	for(i=0; i<k; i++){
		while(!dq.empty() && arr[i]>=arr[dq.back()])
			dq.pop_back();
		dq.push_back(i);
	}
	for(i=k; i<n; i++){
		ans.push_back(arr[dq.front()]);
		//getting the required window, removing begining 
		while(!dq.empty() && dq.front()<=i-k)
			dq.pop_front();
		while(!dq.empty() && arr[i]>=arr[dq.back()])
			dq.pop_back();
		dq.push_back(i);
	}
	ans.push_back(arr[dq.front()]);
	return ans;
}
int main(){
	int t;
	cin >> t;
	tc(z,t){
		ll N,k;
		cin >> N >> k;
		ll arr[N];
		rep(i,N){
			cin >> arr[i];
		}
		vector<ll>x=solve(arr,k,N);
		rep(i,x.size()){
			if(i==0)
				cout << x[i];
			else
				cout <<" "<< x[i];
		}
		cout << "\n";
	}
}