#include <iostream>
#include <string>
#include <sstream>
#define ll long long
using namespace std;
int main()
{
	ll n;
	ll a=0;
	int ctr=0;
	ll sum;
	int k=0;
	int t;
	cin >> n;
	sum=n;
	while(sum>9)
	{ 	n=sum;
		cout << n;
		sum=0;
	while(n!=0)
	{
		a=n%10;
		// printf("%lld\n",a);
		n=n/10;
		sum=sum+a;
	}

	}
	// printf("%lld",sum);
	if(sum>4)
	{
	for(int i=0;i<(9-sum);i++)
	{
		ctr++;
	}
	}
	if(sum<4)
	{
		for(int i=sum;i>0;i--)
			ctr++;
	}
	cout << ctr;
	}
