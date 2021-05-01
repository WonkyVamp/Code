#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007
#define tc(i,t) for( int i=0; i<t; i++ )
#define rep(i,n) for( ll i=0; i<n; i++)
#define rep11(i,n) for( ll i=1; i<n; i++)
#define rep1(i,m) for( ll i=0; i<m; i++)
#define p(i) cout << i << endl
using namespace std;
bool sortby(const pair<int, int> &a, const pair<int, int> &b){
	return a.first < b.first;
}
int main()
{
	ll n,a, b;
	cin >> n;
	vector<pair<int, int>>v;
	rep(i,n){
		cin >> a >> b;
		v.push_back(make_pair(a,1));
		v.push_back(make_pair(b,-1));
	}
	sort(v.begin(), v.end(), sortby);
	ll ctr = 0, req = 1;
	for(int i =0; i<2*n; i++){
		if(v[i].second == 1)
			ctr++;
		else
			ctr--;
		req = max(req, ctr);
	}
	cout << req;
}