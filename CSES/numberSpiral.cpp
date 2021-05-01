#include <bits/stdc++.h>
#include <string>
#define ll long long
using namespace std;
int main()
{
	int t;
	cin >> t;
	for( int i=0; i<t; i++ )
	{
		ll r,c;
		ll ans =0;
		cin >> r >> c;
		if( r >= c )
		{
			if( r%2 == 0 )
				ans = r*r - (c-1);
			else
				ans = (r-1)*(r-1) +c;
		}
		else
		{
			if( c%2 == 0 )
				ans = (c-1)*(c-1) +r;
			else
				ans = c*c -(r-1);
		}
		cout << ans << endl;
	}
}