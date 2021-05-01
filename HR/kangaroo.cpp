#include <bits/stdc++.h>
#include <string>
#define ll long long
using namespace std;
int main()
{
	int x1,v1,x2,v2;
	int c=0;
	cin >> x1 >>  v1 >> x2  >> v2;
	while(x1<=100000000 || x2<=100000000)
	{
		if(x1==x2)
		{
			c=1;
			break;
		}
		x1=x1+v1;
		x2=x2+v2;
		if(x1==x2)
		{
			c=1;
			break;
		}
		else
		{
			continue;
		}
	}
	if(c==1)
		cout << "YES";
	else
		cout << "NO";
}