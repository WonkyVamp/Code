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
		ll n,a;
		cin >> n >> a;
		ll d[n][n]={a};
		ll sum=0;
		for( int i=1; i<=n; i++ )
		{
			int ctr=0;
			for ( int k=1; k<=i-1; k++ )
			{
				if( k==0 )
					break;
				else  if(d[k][n-i+1] !=1 )
				{
					d[k][n-i+1]=1;
					ctr++;
				}
			}
			for ( int k=1; k<=i; k++ )
			{
				if( k==0 )
					break;
				else  if(d[i][n-i+k] !=1 )
				{
					d[k][n-i+1]=1;
					ctr++;
				}
			}
			ll u;
			u = pow(a,ctr);
			sum=sum+u;
			a=a*u;
			for( int t=1; t<=n; t++ )
			{
				for ( int k=1; k<=n; k++ )
				{
					
					if( d[t][k] != 1 )
					{
						d[t][k]=a;
					}
					else
						continue;
				}
			}
		}
		sum=sum % ( 1000000007);
		cout << sum << "\n";
	}
}