#include <bits/stdc++.h>
#include <string>
#define ll long long
using namespace std;
int main()
{
	ll n;
	cin >> n;
	ll steps=0;
	ll sub;
	std::vector<ll> v;
	for ( int i=0; i<n; i++ )
	{
		ll x;
		cin >> x;
		v.push_back(x);
	}
	for ( int i=0; i<n; i++ )
	{
		if ( v[i] > v[i+1] )
		{
			//cout << v[i] << " " << v[i+1] << endl;
			sub = v[i]-v[i+1];
			steps += sub;
			v[i+1] += sub;
		}
	}
	steps -=sub;
	cout << steps;
}