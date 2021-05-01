#include <bits/stdc++.h>
#include <string>
#define ll long long
#define MOD 1000000007
#define MAX 500000
using namespace std;
ll power(ll num,ll r){
	if(r==0) return 1;
	if(r==1) return num%MOD;
	ll ans=power(num,r/2)%MOD;
	if(r%2==0) {
		return (ans*ans)%MOD;
	} return (((ans*ans)%MOD)*num)%MOD;
}

int main()
{
	ll t;
	cin >> t;
	for ( int i=0; i<t; i++ )
	{
		ll a,b;
		cin >> a >> b;
		if ( b>a)
			swap(a,b);
		if( a==0 && b==0)
			cout << "YES" << endl;
		else if ( (a+b) %3 == 0  && 2*b >=a)
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}

}
