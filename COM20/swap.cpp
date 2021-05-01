#include <bits/stdc++.h>
#define ll long long
using namespace std;
void swapk(ll k, ll n, ll v1[])
{
	static int m=0;
	if( m+k > n)
		return;
	if( v1[m] > v1[m+k])
	{
		std::swap(v1[m],v1[m+k]);
		m++;
	}
	swapk( k, n-m, v1);
}
int main()
{
	int t;
	cin >> t;
	for( int j=0; j<t; j++)
	{
		ll k,n;
		cin >> n >> k;
		ll v[n];
		for ( int i=0; i<n; i++ )
		{
			ll a;
			cin >> a;
			v[i]=a;
		}
		int ctr=1;
		int swap =0;
		for ( int i=0; i<n; i++ )
		{
			swapk( k, n, v);
			// if(ctr==1)
			// {
			// 	i=0;
			// }
			// if( (i+k) < n)
			// {
			// 	if( v[i] > v[i+k])
			// 	{
			// 		std::swap(v[i],v[i+k]);
			// 		ctr=1;
			// 		swap=0;
			// 	}
			// 	else
			// 	{
			// 		swap++;
			// 		ctr=0;
			// 	}
			// }
			// for ( int m=0; m<n; m++ )
			// {
			// 	if( (m+k) < n)
			// 	{
			// 		if( v[m] > v[m+k])
			// 		{
			// 			std::swap(v[m],v[m+k]);
			// 		}
			// 	}
			// }
		}
		if(std::is_sorted(v, v + n))
			cout << "yes" << "\n";
		else
			cout << "no" << "\n";
	}
}
