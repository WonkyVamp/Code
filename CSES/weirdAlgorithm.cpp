#include <bits/stdc++.h>
#include <string>
#define ll long long
using namespace std;
int main()
{
	ll n;
	cin >> n;
	std::vector<ll> v;
	v.push_back(n);
	while( n!=1 )
	{
		if( n%2 == 0 )
		{
			n = n/2;
			v.push_back(n);
		}
		else
		{	
			n = n*3 + 1;
			v.push_back(n);
		}
	}
	for( int i= 0; i < v.size(); i++ )
	{
		cout << v[i] << " ";
	}
}