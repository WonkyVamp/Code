#include <bits/stdc++.h>
#include <string>
#define ll long long
using namespace std;
int main()
{
	ll n;
	cin >> n;
	ll sum,s=0;
	//std::vector<ll> v;
	for( int i=0; i<n-1; i++ )
	{
		ll m;
		cin >> m;
		s=s+m;
	}
	sum=(n*(n+1))/2;
	ll mn=sum-s;
	cout << mn;
}