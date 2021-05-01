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
		int n,a,b,c,d;
		cin >> n >> a >> b >> c >> d;
		int min=(a-b)*n;
		int max=(a+b)*n;
		if( min <=(c+d) && max >=(c-d))
			cout << "YES" << "\n";
		else
			cout << "NO" << "\n";
	}
}