#include <bits/stdc++.h>
#include <string>
#define ll long long
using namespace std;
int main()
{
	int t;
	cin >> t;
	for( int j=0; j<t; j++)
	{
		vector <ll> v;
		ll n,q;
		cin >> n >> q;
		ll x=0;
		ll ft=0;
		for( int i=1; i<=q; i++ )
		{
			ll res=0;
			ll s,d;
			v.push_back(d);
			cin >> s >> d;
			if( i==1 )
			{
				x=s;
			}
			if( i>1 )
			{
				res=abs(v[i-1]-s);
			}
			ft=abs(d-s);
			x=x+ft+res;
		}
		cout << x << "\n";
	}
}