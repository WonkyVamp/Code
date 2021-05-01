#include <bits/stdc++.h>
#include <string>
#define ll long long
using namespace std;
int main()
{
	ll n;
	cin >> n;
	ll i;
	if( n < 4 && n != 1 )
		cout << "NO SOLUTION";
	else if(n==1)
		cout << 1;
	else if(n==4)
		cout << 2 << " "<<4 << " "<<1 << " "<<3;
	else
	{
		for ( i=1; i<=n; i+=2 )
		{
			cout << i << " ";
		}
		for ( i = 2; i <n-1; i+=2 )
		{
			cout << i << " ";
		}
		cout << i;
	}
		
}
				