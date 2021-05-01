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
		ll n;
		cin >> n;
		int k,x;
		for ( k=2; k<=29; k++ )
		{
			ll y = pow(2,k)-1;
			if( n%y == 0 ){
				x=n/y;
				break;
			}
			else
				continue;
		}
		cout << x << endl;
	}
}