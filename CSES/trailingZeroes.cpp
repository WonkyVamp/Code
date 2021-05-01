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
	ll n;
	cin >> n;
	int count=0;
	for ( ll i = 5; (n/i)!=0; i*=5  )
	{
		count = count + n/i;
	}
	cout << count ;
} 