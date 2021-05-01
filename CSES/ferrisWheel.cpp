#include <bits/stdc++.h>
#include <string>
#define ll long long
#define MOD 1000000007
#define rep(i,n) for( ll i=0; i<n; i++)
#define rep1(i,m) for( ll i=0; i<m; i++)
using namespace std;
int main()
{
	ll n,max_weight;
	int ctr=0;
	cin >> n >> max_weight;
	ll gandolas[n];
	rep(i,n){
		cin >> gandolas[i];
	}
	sort( gandolas, gandolas+n);
	ll i=0, j=n-1;
	while( i<=j){
		if( (gandolas[i]+gandolas[j])<=max_weight && i!=j){
			ctr++;
			i++;
			j--;
		}
		else if( gandolas[i]<max_weight )
		{
			ctr++;
			j--;
		}
	}
	cout << ctr;
}