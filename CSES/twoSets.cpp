#include <bits/stdc++.h>
#include <string>
#define ll long long
using namespace std;
int main()
{
	ll n;
	cin >> n;
	ll sum= n*(n+1)/2;
	if ( sum %2 != 0)
	{
		cout << "NO" << endl;
	}
	else
	{
		cout << "YES" << endl;
		if ( n == 3 ) 
		{
			cout << 2 << endl;
			cout << 1 << " " << 2 << endl;
			cout << 1 << endl;
			cout << 3;
		}
		else
		{
			ll s = sum/2;
			ll s2=0;
			int i,j;
			std::vector<ll> v;
			std::vector<ll> v1;
			int ctr1=0,ctr2=0;
			if ( n%2 == 0 )
			{
				for ( i=1, j=n; s2!=s ; j--)
				{
					s2+=j+i;
					v.push_back(i);
					v.push_back(j);
					ctr1+=2;
					i++;
				}
				for ( int m=i; m<=j; m++){
					v1.push_back(m);
					ctr2++;
				}
			}
			else
			{
				i=n;
				while(s2<=s)
				{
					s2=s2+i;
					if (s2>s)
						break;
					ctr1++;
					v.push_back(i);
					i--;
				}
				s2=s2-i;
				ll y= s-s2;
				if( y !=0 )
				{
					v.push_back(y);
					ctr1++;
				}
				ctr2=n-ctr1;
				int m=ctr2;
				for ( int i=1; m != 0; i++ )
				{
					if( i==y )
						continue;
					else{
						v1.push_back(i);
						m--;
					}
				}
			}
			sort(v.begin(),v.end());
			cout << ctr1 << endl;
			for ( i=0; i<ctr1; i++)
				cout << v[i] << " ";
			cout << endl;
			cout << ctr2 << endl;
			for ( i=0; i<ctr2; i++)
				cout << v1[i] << " ";
		}
	}
}