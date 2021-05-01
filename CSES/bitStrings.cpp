#include <bits/stdc++.h>
#include <string>
#define ll long long
#define MOD 1000000007
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
	cout << power(2,n);
}