#include <bits/stdc++.h>
#include <string>
#define ll long long
#define MOD 1000000007
#define rep(i,n) for( ll i=0; i<n; i++)
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
	std::set<ll> s;
	rep(i,n)
	{
		ll x;
		cin >> x;
		s.insert(x);
	}
	cout << s.size();
}