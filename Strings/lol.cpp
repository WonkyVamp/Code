#include <bits/stdc++.h>
#include <string>
#define ll long long
using namespace std;
int main()
{
	int t;
	cin >> t;
	for(int i = 0 ; i < t ; i++)
	{
			string n;
			cin >> n;
			ll a=10;
			ll sum=0;
			
			while(true)
			{
				for( int i=0; i<n.size(); i++)
				{
					int digit= n[i] - '0';
					sum=sum+digit;
				}

				if(sum <= 9)
					break;
				n = "";
				while(sum != 0)
				{
					int digit = sum % 10;
					char d = digit + '0';
					sum = sum / 10;
					n = d +  n;
				}
			}
			if(sum>4)
				cout << (9-sum) << "\n";
			if(sum<=4)
				cout << sum << "\n";
	}
}



	
