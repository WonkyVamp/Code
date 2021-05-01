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
		std::vector<int> price;
		std::vector<int> choice;
		int n,s,ctr1=0,ctr2=0;
		cin >> n >> s;
		for ( int i=0; i<n; i++ )
		{
			int p;
			cin >> p;
			price.push_back(p);
		}
		for ( int i=0; i<n; i++ )
		{
			int p;
			cin >> p;
			choice.push_back(p);
		}
		int remaining=(100-s);
		for( int i=0; i<n; i++ )
		{
			ctr2++;
			int sum=price[i];
			int m=choice[i];
			for ( int k=0; k<n; k++ )
			{
				if( choice[k]!=choice[i] )
				{
					sum=sum+price[k];
					if( sum > remaining )
					{
						sum=price[i];
						continue;
					}
					else
					{
						ctr1=1;
						break;
					}
				}
				else
				{
					continue;
				}
				
			}
			if(ctr1==1)
			{	
				cout << "yes" << "\n";	
				break;
			}
			
		}
		if(ctr1 != 1)
			cout << "no" << "\n";
	}
}