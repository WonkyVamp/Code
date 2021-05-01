#include <bits/stdc++.h>
#include <string>
#define ll long long
#define MOD 1000000007
#define rep(i,n) for( ll i=0; i<n; i++)
#define rep1(i,m) for( ll i=0; i<m; i++)
using namespace std;
int main()
{
	ll n,m,k;
	int ctr=0;
	cin >> n >> m >> k ;
	std::vector<ll> des_size;
	std::vector<ll> act_size;
	rep(i,n){
		ll x;
		cin >> x;
		des_size.push_back(x);
	}
	sort(des_size.begin(),des_size.end());
	rep1(i,m){
		ll x;
		cin >> x;
		act_size.push_back(x);
	}
	sort(act_size.begin(),act_size.end());
	int i=0,j=0;
	while( i<n && j<m )
	{
		if( abs(des_size[i]-act_size[j])<=k){
			ctr++;
			i++;
			j++;
		}
		else if( des_size[i]>act_size[j])
			j++;
		else
			i++;
	}
	cout << ctr;
}