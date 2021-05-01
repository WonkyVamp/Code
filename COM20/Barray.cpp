#include <bits/stdc++.h>
#include <string>
#define ll long long
using namespace std;
int main()
{
	int t;
	cin >> t;
	for ( int i=0; i<t; i++ )
	{
		int a=2;
		int b=1;
		int k,j;
		ll n;
		cin >> n;
		ll m= n/2;
		if( m%2 == 0 )
		{
			cout << "YES" << endl;
			for( j=0 ; j<m; j++ )
			{
				cout << a << " ";
				a+=2;
			}
			for ( k=0; k<(m-1); k++ )
			{
				cout << b << " ";
				b+=2;
			}
			b+=(m);
			cout << b << endl;
		}
		else
			cout << "NO" << endl;
	}
}