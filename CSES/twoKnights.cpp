#include <bits/stdc++.h>
#include <string>
#define ll long long
using namespace std;
int main()
{
	ll n;
	cin >> n;
	ll m=0;
	ll k=0;
	for ( ll i=1; i<=n; i++ )
	{
		ll x= i*i*(i*i-1)/2;
		if ( i==1 )
			cout << 0 << endl;
		else if( i==2 )
			cout << x << endl;
		else
		{
			k= k+m;
			ll z= x-(8*k+8);
			cout << z << endl;
			if( m == 0 )
				m +=2;
			else
				m++;			
		}
	}
}