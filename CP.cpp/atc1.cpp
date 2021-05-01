#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
	int a, b, c;
	cin >> a >> b >> c;
	ll ans = a*a + b*b;
	ll ans2 = c*c;
	if(ans < ans2 )
		cout << "Yes";
	else
		cout << "No";
}